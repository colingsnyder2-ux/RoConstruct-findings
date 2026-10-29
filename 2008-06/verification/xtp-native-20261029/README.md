# XTP native integration, 2026-10-29

XTP now forces 441 exact roots, up from 412. Every root matches code and referenced data and the runtime linker map selects its verified object. All old roots remain. Full forced link and colour/button state, caption, shortcut and object lifetime tests exit zero. This is local integration evidence; no new server credits.

The resolver selects one object per filename across layers. Counting both same-name alternatives as simultaneous symbol providers incorrectly rejected 29 selected functions. `deduplicate_layer_files` fixes that count for XTP only. Different-filename shared providers remain excluded; no blanket template substitution.

MFC internal fallback compilation rises from 11/12 to 12/12: use the early authentic vendor export prelude with WINVER and _WIN32_WINNT=0x0501. Legacy theme enums remain available and MFC 9 private declarations have their required XP message types. No old matching symbol/address pairs lost. Unmodified NT4 prelude fails those declarations. The VC8 shared-MFC NONCLIENTMETRICS constructor recovery duplicates the existing module body, so adds nothing.

Masked whole-module unique address matches rise from 4784 to 4837. Those 53 diagnostic matches are not claimed as 53 strict new accepted functions. Placement rises from 386 to 404 distinct addresses, with XTP adding18; stale module outputs remain deferred.

Rebuild requires the matching source tooling commit containing `xtp-11.2.2-internals-vendor-xp-rtm` and same-name provider deduplication, plus legitimately obtained Codejock 11.2.2 sources. Proprietary vendor sources are not included here. Replay compiler trials with research recipe `xtp-vendor-xp-native-providers-20261029`; run `roc rebuild 2008-06 module xtp --no-notify` with ROC_INTEGRATOR_PRIVATE=1, then `roc rebuild 2008-06 placed --no-notify`.

Validation: 1087 Python tests pass, 3 skipped, 3 subtests pass; all five frontend test files pass. Focused rebuild suite:56 pass.
