# Shared-symbol and placement audit - 2026-10-30

Two read-only Luna helpers audited placement proofs and stale shared-symbol inventories. Parent alone edited source and ran builds. No additional checkout or shared build writers.

Original fresh placement rerun364 ->408:44 new placements,0 lost. All408 were already in passing local module ownership; no new distinct integrated/owned credit.

Placement had two correctness gaps: unavailable data could silently remove a twin from consideration, and object-only cache keys could reuse results after target/matcher changes. Source mainb9676ae19c now requires complete referenced-data proof plus unique pair_object ownership,including proven local callees,and fingerprints actual target image/table/relocs/loaded matcher code. Originally singleton bodies are not promoted by this path. Added regression tests for unmapped twins,incomplete winners,explicit mismatch control,target-data changes and function-kind changes;108 relevant tests pass.

Fresh complete data/callee placement408 ->475:67 added,0 lost. Added by module RbxgsApp40,RbxUtil9,XTP8,RbxApp7,Boost1,G3D1,G3D-GL1. All475 already locally owned. This is improved ambiguity placement/proof metadata,not67 newly integrated functions. No webhook/native credit fabricated.

Older shared audit identified7654 shared symbols,including33 flag-only profiles over433 provider copies,mostly already-owned addresses. Fresh replay of152 old recovery records using45 current linked objects yields0 unique proofs,83 ambiguous and69 non-exact. Raw unowned address lists are hypotheses,not gains. No global shared-symbol replacement was applied.

Camera candidate005ce6e0 is a mined invented Camera::doFly(NavKeys,int) API with local NavKeys. Neither genuine Camera.cpp nor adopted Camera.h provides a corresponding fly/step method; onHeartbeat and setCameraType have different behavior. It cannot replace a genuine method without source/ABI recovery. No disconnected method added merely to inflate count.

Current goal remains open: native libraries still require source/layout recovery and independent server acceptance. RbxgsApp local4264 and previous source proposals remain separate from accepted ledger.
