"""Read-only, address-deduplicated replay blocker inventory."""
import collections
import hashlib
import json
from pathlib import Path

out = Path('rebuild/2008-06/out')
destination = Path(__file__).parent
summaries = []
for module in ['RbxApp', 'RbxgsApp', 'XTP', 'G3D', 'Boost', 'Ogre']:
    path = out / module / 'swap-results.json'
    report = json.loads(path.read_text())
    addresses = collections.defaultdict(set)
    failures = []
    for group in report['groups']:
        rows = group.get('results', [])
        if group.get('error'):
            cause = 'compile error'
            for address in group['addrs']:
                addresses[cause].add(address)
        for row in rows:
            addresses[row.get('cause', 'unclassified')].add(row['address'])
    for group in report.get('failed', []):
        for address in group.get('addrs', []):
            addresses['compile error'].add(address)
        failures.append({key: group.get(key) for key in ['file', 'recipe', 'cl', 'flags', 'addrs', 'error']})
    for group in report.get('rejected', []):
        addresses['header incompatibility'].update(group.get('addrs', [group['address']] if 'address' in group else []))
    exact = addresses.get('exact', set())
    counts = {cause: {'unique_addresses': len(items), 'not_exact_elsewhere': len(items - exact)}
              for cause, items in sorted(addresses.items())}
    summary = {'module': module, 'report_sha256': hashlib.sha256(path.read_bytes()).hexdigest(),
               'counts': counts, 'failed_groups': len(failures),
               'note': 'Causes may overlap; exact elsewhere means another replay variant, not linked ownership.'}
    summaries.append(summary)
    (destination / (module.lower() + '-replay-blockers.json')).write_text(json.dumps({
        'summary': summary, 'addresses': {k: sorted(v) for k, v in addresses.items()},
        'compile_failures': failures}, indent=1))
    print(module, json.dumps(counts), flush=True)
(destination / 'current-replay-summary.json').write_text(json.dumps(summaries, indent=1))
