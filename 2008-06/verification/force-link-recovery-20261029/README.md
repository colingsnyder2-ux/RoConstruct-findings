# Forced-link recovery, 2026-10-29

Requires RoConstruct commit 26fb8b178ccfe2de06e7d6078e0259769120846b, which filters local symbols and supports opt-in module helper preference.

RbxApp uses genuine OpenRBX Humanoid and Players definitions against its own headers to resolve four missing symbols. RbxgsApp forces external definitions only and prefers its native helpers over unselected verified-object inlines. Both forced links and runtime harnesses pass, retaining 84 and 136 swaps respectively. M2, M4a and M5 pass. M4b retains the pre-existing renderer dependency failure.

Receipts describe isolated local builds, not independent server acceptance. No new integrated-function credit is claimed. G3D flag receipts are diagnostic only: /fp:fast adds 21 exact address candidates in BinaryInput.obj without losing prior matches in that object; twins remain ambiguous and no G3D module flags or shared-symbol swap policy changed.

The existing package manifest is updated only for these configs, glue and diagnostic receipts. Other files retain their published hashes.
