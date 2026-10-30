# Linked thunk placement candidates, 2026-10-30

Scanned successful local module test executables for linked five-byte jumps to
uniquely identified, already-owned target callees. Thirty-five distinct target
addresses have caller object-byte and linked callee object/data/executable-byte
proofs. These are candidates, not new integrations or server credits.

Six candidates also have the named class in the target vtable inventory, with
the actual target executable's vtable pointer checked: PartInstance::onChildAdded,
MultiJoint::putInKernel, CXTPControlButton::Copy, CWorkspace::SetSelectedItem,
CXTPControlTabWorkspace::GetPaintManager and CRibbonColorSet::RefreshMetrics.
Their addresses and symbol/module proofs are in vtable-evidence.json. The
remaining candidates lack comparable source identity evidence and must not be
credited from this scan.

The vtable check independently verifies each inventoried pointer. Class names
come from the existing vtable analysis; method attribution combines that class,
the linked symbol and the proven callee. Further ownership review is needed,
including any alias/identical-code-folding ambiguity and actual server policy.
The ordinary placed pass only considers bodies at least 16 bytes, so it does not
place these five-byte thunks. No application or server state was changed; no
webhook or integration submission was made.

Reproduce in the private checkout, with its current linked outputs:

    python work/probe_native_library_linked_thunks_20261030.py
    python work/verify_native_library_linked_thunks_20261030.py
    python work/native-library-linked-thunks-20261030/vtable_evidence.py

Inputs include the target executable, functions and vtable inventories, linked
module objects, ownership reports and test executables/maps. Results can change
after rebuilds; re-run all three steps against a consistent build snapshot.
