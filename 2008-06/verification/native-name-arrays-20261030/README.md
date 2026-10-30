# Native name-array migration, 2026-10-30

Status: submitted to the integration server as colin, packet5cc55bf19bd652d2972fd92d81b3d8c1f5db933df8b8ab91c15bb6ac5609beef; needs-owner-review, verified=false, credits0. No webhook delivery is claimed. This is an experimental source/build-unit packet, not the adopted rbxgs overlay.

The common source mismatch was pointer-to-pointer name tags versus the original character arrays. The migration changes70 canonical headers and64 missing tag definitions in their genuine owning CPP files. Name::declare/doDeclare/callDoDeclare and FactoryProduct/NonFactoryProduct::className use the genuine OpenRBX template bodies, including Boost once. No class fields, bases or virtual slots are added. Existing support stubs are not expanded.

Under the same data-qualified ownership policy, the updated accepted baseline has3698 addresses; the candidate3858:160 additional exact code/data addresses,0 lost. Both full module builds have0 compilation errors across all seven layers, link successfully and pass their existing runtime test.

All159 external gains were explicitly forced into the test link with0 unresolved symbols. The test checks64 real name arrays for their expected strings and stable cache identity, exit0. The one local gain007f3d50 is a ModelInstance.cpp initializer retained in the executable CRT startup range; its linked instruction bytes are exact after relocation normalization. Source witnesses are in gain-witnesses.json.83 Name::declare calls reach original00553f90,76 ClassDescriptor constructor calls reach005708f0; the direct-call audit records311 calls total.

This packet supersedes prototype d93e7eebd5ad16f7d07d612ddd5434ff5efe8bf4244172e8c49466fe044ae995. Do not queue the prototype: it retained synthetic direct factory-name caches. The final revision emits genuine Name::doDeclare implementations and the genuine factory Boost-once path while retaining160 gains and0 losses.

Before queueing independent verification, the host needs source branch codex/verified-replay-cache-20261030 at63864aae64 (or later). It implements whole-binary code/data ownership qualification, preserves ambiguity when target data is unavailable, supports both legacy and array-tag glue declarations, and makes unchanged source files compile beside adopted sibling headers. The new header defines ROC_ARRAY_CLASS_NAMES to select array-compatible support. Legacy mode still compiles and runs. Server files were not changed by this campaign.

The packet cites45 current exact-mined witnesses. Scheduling labels are unreliable for many remaining helpers; ordinary Name/ToolMouseCommand claims returned no eligible classes. The new canonical App/util/glue_class_names.cpp build unit uses the supported immutable, quarantined build-unit path. Empty declarations asserts no new class layouts, not a waiver of independent ABI gates.

Only server acceptance can add native credits or trigger the normal accepted-gain webhook. Owner review must queue the exact immutable contents, then the server must independently verify current-baseline compile/link, M2/M4a/M5, size/base, references and zero loss. Local measurements are not a receipt. The candidate overlay remains unadopted in this findings branch.

Reproduction scripts are preserved for inspection; they expect a private Worker with the recorded baseline and historical compiler/dependencies. They do not install the verifier upgrade or approve the server packet. Raw vendor/source snapshots and compiled object archives remain local; only minimal source edits and measured evidence are published here.
