"""Conservative read-only check of direct, default polymorphic constructor calls."""
import collections
import hashlib
import json
import re
import struct
from pathlib import Path
from roc import match

root = Path(__file__).parent
abi_path = Path('C:/Users/colin/RoConstruct/work/codex-native-colin-20261029/rebuild/2008-06/manifests/abi-evidence.json')
abi = json.loads(abi_path.read_text())
sites = collections.defaultdict(set)
known = set()
for cls, info in abi.items():
    if info.get('confidence') != 'observed':
        continue
    for function, stores in info.get('vptr_stores', {}).items():
        if any(destination.endswith('+0x0]') for destination, table in stores):
            sites[function].add(cls)
            known.add(cls)
constructor = re.compile(r'^\?\?0((?:[A-Za-z_]\w*@)+)@QAE@XZ$')
rows = []
deferred = []
specs = {spec['name']: spec for path in Path('rebuild/2008-06/modules').glob('*.json')
         for spec in [json.loads(path.read_text())]}
for module in ['RbxApp', 'RbxgsApp', 'Ogre', 'XTP', 'G3D', 'G3D-GL', 'Boost', 'BoostExtra', 'MfcAtl', 'RakNet']:
    out = Path('rebuild/2008-06/out') / module
    force = out / 'force/force_verified.h'
    if not force.exists():
        continue
    report = json.loads((out / 'report.json').read_text())
    if not report.get('linked'):
        deferred.append(module)
        continue
    test = specs[module]['test']
    selected = {}
    for line in Path('rebuild/2008-06/out/tests', test, test + '.map').read_text().splitlines():
        fields = line.split()
        if len(fields) >= 4 and re.fullmatch('[0-9a-fA-F]{4}:[0-9a-fA-F]{8}', fields[0]):
            selected[fields[1]] = line.strip()
    required = {line.split('/INCLUDE:', 1)[1][:-2] for line in force.read_text().splitlines()}
    mapping = {}
    for entry in json.loads((out / 'verified/swaps.json').read_text())['swaps']:
        for symbol, address in entry['keep'].items():
            mapping.setdefault(symbol, address)
    for path in sorted((out / 'linked').glob('*.obj')):
        obj = path.read_bytes()
        sections, symbols, locations, _ = match._coff_data_index(obj)
        present = required.intersection(locations)
        if not present:
            continue
        functions = {s: (b, r) for s, b, r in match.coff_functions(obj) if s in present}
        for symbol, (body, relocs) in functions.items():
            owner = re.search(r'linked:([^ ]+\.obj)', selected.get(symbol, ''))
            if not owner or owner[1] != path.name:
                continue
            address = mapping[symbol]
            target, target_relocs, _ = match.target('2008-06', address)
            if len(body) != len(target) or not match.exact_match(target, target_relocs, body, relocs):
                continue
            if match.data_check('2008-06', address, target, match.coff_data_refs(obj, symbol))[1]:
                continue
            value, section = locations[symbol]
            header = sections[section]
            for index in range(header[7]):
                at, ref, kind = struct.unpack_from('<IIH', obj, header[5] + index * 10)
                offset = at - value
                name = symbols[ref][0]
                parsed = constructor.fullmatch(name)
                if not parsed or kind != 20 or not 1 <= offset < min(len(body), len(target)) - 3 or body[offset - 1] != 0xe8:
                    continue
                expected = '::'.join(reversed(parsed[1].rstrip('@').split('@')))
                if expected not in known:
                    continue
                destination = '%08x' % (int(address, 16) + offset + 4 + struct.unpack_from('<i', target, offset)[0])
                actual = sorted(sites.get(destination, ()))
                status = 'matches observed type' if expected in actual else 'CONFLICT' if actual else 'unknown callee provenance'
                rows.append({'module': module, 'symbol': symbol, 'address': address, 'object': path.name,
                    'constructor': name, 'expected_type': expected, 'original_callee': destination,
                    'observed_root_types': actual, 'status': status})
result = {'abi_manifest_sha256': hashlib.sha256(abi_path.read_bytes()).hexdigest(), 'rows': rows, 'deferred_modules': deferred,
          'scope': 'Only direct E8 calls to public default constructors with simple decorated class names and observed root-vptr metadata. Unknown sites are not negative evidence. No ownership policy changed.'}
(root / 'forced-constructor-audit.json').write_text(json.dumps(result, indent=1))
print('Coverage', len(rows), 'constructor-call observations across', len({r['module'] for r in rows}), 'modules')
print('Statuses', dict(collections.Counter(r['status'] for r in rows)))
print(json.dumps([r for r in rows if r['status'] == 'CONFLICT'], indent=1))
