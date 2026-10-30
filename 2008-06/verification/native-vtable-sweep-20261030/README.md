# Native vtable slot sweep

Read-only discovery across the current RbxgsApp and XTP linked objects and test
executables. The scan compares a simple-class source COFF vtable relocation to
the same slot of the target class vtable, verifies that target pointer in the
actual executable, compares object code with relocation masks, and checks any
local referenced data. The symbol must also occur in the linked test map.
Multiple-inheritance and template-class vtables are deliberately excluded.

121 distinct target addresses are candidates. Of those, 16 distinct addresses
have no source code relocations, match raw target bytes in both the linked
object and test executable, and appear in the corresponding linked executable
vtable slot (9 RbxgsApp, 15 XTP, overlapping by 8).
Their bodies are 1, 3, 6 or 8 bytes. `candidates.json` and `unrelocated.json`
contain rows and source/target slot identities; counts are distinct addresses,
not summed module rows.

This is not a native ownership grant. Tiny bodies and identical-code folding
may represent multiple functions; class RTTI inventory and source vtable slot
are evidence, not complete provenance. Review aliases, actual module ownership,
source identity, linked dependencies and server acceptance before crediting any
address. One previously reported unrelocated candidate (`0078c5a0`) lacks the
required linked vtable proof and was removed from the stronger set. The other
104 distinct candidates still need their code relocations and linked destinations
proved. No server submission, webhook or credit occurred.

Reproduce with the saved scan and verify scripts copied to `work/` under their
original names, with `PYTHONPATH` pointing to the RoConstruct checkout. Run the
scan before verification, against a consistent set of module builds, test maps,
target binary, function and vtable inventories. Results are local snapshots.
