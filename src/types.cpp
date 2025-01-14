
#include "types.h"

namespace tr {
//    types::SyntaxKind BaseUnion::kind() {
//        return node->kind;
//    }
//    bool BaseUnion::empty() {
//        return node->kind == SyntaxKind::Unknown;
//    }
//
//    BaseUnion::BaseUnion() {
//       node = make_shared<Node>();
//    }
    types::DiagnosticMessage::DiagnosticMessage(int code, types::DiagnosticCategory category, const string_view &key, const string_view &message, bool reportsUnnecessary, bool reportsDeprecated, bool elidedInCompatabilityPyramid): code(code), category(category), key(key), message(message), reportsUnnecessary(reportsUnnecessary), reportsDeprecated(reportsDeprecated), elidedInCompatabilityPyramid(elidedInCompatabilityPyramid) {}

    bool VariableDeclaration::isConst() {
        if (auto a = to<VariableDeclarationList>(getParent())) {
            return a->flags & (int)types::NodeFlags::Const;
        }
        return false;
    }

}