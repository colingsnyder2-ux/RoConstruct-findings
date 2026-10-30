# Scintilla forced-symbol link, 2026-10-30

The normal Scintilla control fixture links only a small portion of the library.
This independent fixture adds linker `/INCLUDE` directives for 149 externally
defined symbols associated with the module's 127 locally owned addresses. It
links the actual two Scintilla objects and the period MFC 9 import library. The
test linked with no unresolved symbols and exited 0 after constructing and
destroying an unattached control.

For 125 of the 127 addresses, a forced symbol's linked executable bytes match
the target under relocation masks, and its object-local referenced data checks
pass. Two addresses, `0040df50` and `00710290`, were not established by that
object-and-map check. The test does not exercise a window, editing operations or
every forced method at runtime, and the dependency destinations of masked
operands were not independently checked. `result.json` records roots and link
result; `executable-proof.json` records the 125 proofs. This is local build
evidence, not server-accepted native credit or a new function count.

The fixture is separate from the normal module build. Recreate it from current
`owned-symbols.json`, retaining only externally defined symbols, and run with
the module's pinned toolchain, include paths, MFC import library and runtime DLL.
Recheck on every changed library or module snapshot.
