# Native Value conversions, Script cast and FunctionRef initialization - 2026-10-30

52 real SDK class probes:48 compile,4 fail; only Script adds2 previously unowned addresses. Supplementary12 probes for real Value typedefs,proper LuaArguments namespace and Winsock include order all compile,0 extra gains. Most shared-pointer cast pool already owned; not adding dead template instantiations to inflate count.

NativeValueConversions.cpp instantiates Script cast and restores Value conversions for Instance/DescribedBase references and Lua FunctionRef. Specialization declarations precede generic template uses in existing type.h; only genuine forward declarations/includes added,no fields/layout changes. No analog external convert helper copied. Real DescribedBase upcast is functional but not counted exact.

New conversion source exposed missing FunctionRef default constructor. Native00417360 proves existing ThreadRef base initialization and zero functionId. Restored in ordinary App/script/ThreadRef.cpp; exactly reproduces constructor and resolves actual unresolved symbol without pruning callers. Evidence saves full target instructions.

RbxgsApp4257 ->4262:5 exact gains,0 losses. Seven layers0 compile errors;module link/runtime0.460 forced external roots retain previous455. Runtime tests Script correct/wrong/null casts,ownership counts,Value nil and typed object up/downcasts,preserved identity,type metadata and exact wrong-type error messages. FunctionRef default/copy verified. Live Lua state registers actual ThreadRef NodeBridge,loads function,retains through Value copy,and invokes with5 ->12. Previous64 Name,typed signals,mesh vectors,G3D arrays and cast/security tests retained.

All5 gained addresses have fresh object code/data proofs and normalized instruction equality in actual linked executable,with selected module object ownership verified by linker map. No test-inline replacement used for forced roots.

Combined packet 862e299dfe254c41378b442c6d5b0f9a874ba0f93520f0aed3c27c60f75b25c4 supersedes20d074c7.185 known exact-mined witnesses,158 delta overlay paths. Server state needs-owner-review,verifiedfalse,credits0. Independent ABI/M2/M4a/M5/reference/zero-loss gates remain required. Candidate/proofs published for review;accepted default overlay not overwritten. Five globally new owned exacts webhooked as colin via purple Server Mining digest;0 pending.
