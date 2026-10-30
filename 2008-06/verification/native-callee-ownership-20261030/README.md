# Data-anchored callee ownership, 2026-10-30

Submitted as colin, immutable packet88014422cb4947a9043e2e5a0d5ed338c875071cbcd3c71782b20de2e790998e: needs-owner-review,verified=false,credits0. This supersedes5cc55bf19bd652d2972fd92d81b3d8c1f5db933df8b8ab91c15bb6ac5609beef with stronger proof; the135 genuine name-array source edits are unchanged. No acceptance/webhook delivery is claimed.

Whole-binary code/data candidates now refine through unadjusted direct E8/E9 calls/jumps and pushed callbacks to functions defined in the same object. A unique, completely checked data reference seeds the proof. Ambiguous dependencies resolve before callers; every known constraint must agree. Unknown imports, nonzero code addends, unsupported opcodes, unresolved cycles and unavailable/mismatched data cannot manufacture unique ownership. Source5e3b39b79f on codex/verified-replay-cache-20261030 implements this;198 relevant tests pass.

A read-only prototype suggested547 new placements. A regression exposed premature unique ownership while a second callee remained unresolved. That implementation/count is rejected. The strict implementation yields300 additional candidate placements over the data-only candidate3858, bringing it to4158,0 previous candidate addresses lost.

Under the same strict policy, the legacy source baseline owns3800 addresses; genuine name-array source owns4158:358 source gains,0 losses. Both seven-layer full builds compile without errors, link and pass runtime.351 external source gains were explicitly force-linked with0 unresolved symbols. All7 local gains have exact linked code and actual CRT startup entries.64 real name caches pass expected-string/stable-identity checks, exit0.

Force-linking the entire placement increase also pulled older graphics bodies and exposed36 unresolved dependencies, recorded in graphics-blockers.json. Those remain unfinished integration work. They are not silently counted as successful new integrations. Forcing the actual source-gain set succeeds independently.

The server packet contains95 current exact-mined target witnesses and all135 existing source edits. The host must review exact contents and deploy the verifier/support code before independent current-baseline M2/M4a/M5, size/base, references, zero-loss and ownership gates. This branch publishes evidence, not an adopted rbxgs overlay. Server checkout remains untouched.

Reproduction C++ cache fixture/header basis and source packet are in verification/native-name-arrays-20261030. Local compiled archives remain private. Only independent server acceptance may add native credit or trigger the accepted-gain webhook.
