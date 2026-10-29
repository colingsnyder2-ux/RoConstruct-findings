# zlib native compiler profile integration

Five newly integrated bodies: fill_window, deflate_stored, deflate_fast, deflate_slow and inflate_table. Genuine unchanged zlib1.2.3 C sources, per-file accepted flags. See gain-proof.json for exact code/data and actual linker-map ownership. Private callbacks are exercised through their native owning deflate API, not artificial external aliases.

Refreshed baseline29->34; old cached27/24 inventories were stale and two allocator matches per ABI are excluded from gains. Stdcall26 unchanged. No old masked symbol/address pairs lost, including ambiguous twins. Both ABIs pass36 streaming combinations; PNG consumer and M2/M4a/M5 pass. M4b retains identical36 unresolved symbols. Placement407.53 focused tooling tests pass. No authoritative server credits claimed.
