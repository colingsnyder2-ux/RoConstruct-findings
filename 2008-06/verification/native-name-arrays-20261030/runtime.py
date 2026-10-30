"""Exercise genuine name caches from all moved tag owners against the saved candidate."""
import json
import re
from pathlib import Path
from roc import rebuild

root = Path(__file__).parent
summary = json.loads((root / 'migration-summary.json').read_text())
moved = set(summary['moved_tag_definitions'])
candidate = json.loads((root / 'candidate-overlay.json').read_text())
base = json.loads((root / 'baseline-overlay.json').read_text())
definitions = {}
for rel, edits in candidate.items():
    if not rel.endswith('.cpp'):
        continue
    for old, new in edits[len(base.get(rel, [])):]:
        for m in re.finditer(r'\bchar\s+((?:\w+::)*s\w+)\[\]\s*=\s*("[^"\n]*")\s*;', new):
            if m[1].split('::')[-1] in moved:
                definitions[m[1]] = m[2]
assert len(definitions) == len(moved)
header = json.loads((root / 'headers.json').read_text())['App/include/util/Name.h'][0][1]
include = root / 'runtime-include'
(include / 'util').mkdir(parents=True, exist_ok=True)
(include / 'util/Name.h').write_text(header)
source = ['#include "util/Name.h"', '#include <cstdio>', '#include <cstring>']
for name in sorted(definitions):
    parts = name.split('::')
    source.append(''.join('namespace %s { ' % p for p in parts[:-1]) + 'extern char %s[];' % parts[-1] + ' }' * (len(parts)-1))
source.append('int main() {')
for index, (name, literal) in enumerate(sorted(definitions.items()), 1):
    source.append(' { const RBX::Name& n = RBX::Name::declare< ::%s >();' % name)
    source.append('   if (std::strcmp(n.c_str(), %s) || &n != &RBX::Name::declare< ::%s >()) return %d; }' % (literal, name, index))
source += [' std::printf("name caches: %d/%d passed\\n");' % (len(definitions), len(definitions)), ' return 0;', '}']
test = 'native_name_array_cache_v2_20261030'
test_path = rebuild.workspace('2008-06') / 'tests' / (test + '.cpp')
text = '\n'.join(source) + '\n'
assert not test_path.exists() or test_path.read_text() == text
test_path.write_text(text)
(root / 'runtime.cpp').write_bytes(test_path.read_bytes())
compiler = json.loads((root / 'results.json').read_text())[0]['compiler_config']
includes = [include.resolve()] + [Path(arg[2:]) for arg in compiler['args'] if arg.startswith('/I')]
spec = rebuild.load_module('2008-06', 'rbxgs-app')
deps, pending = [], list(spec.get('depends', []))
while pending:
    dep = rebuild.load_module('2008-06', pending.pop(0))
    lib = rebuild.workspace('2008-06') / 'out' / dep['name'] / 'linked/linked.lib'
    if lib not in deps:
        deps.append(lib)
        pending += dep.get('depends', [])
result = rebuild.resolve_objects('2008-06', test, [root / 'candidate-linked'],
                                 'native-name-array-cache-v2/linked', includes=includes, extra_libs=deps,
                                 defines='WIN32 NDEBUG _MBCS _CRT_SECURE_NO_WARNINGS BOOST_ALL_NO_LIB')
(root / 'runtime-result.json').write_text(json.dumps(result, indent=1))
print(json.dumps({k: result.get(k) for k in ['compiled', 'linked', 'exit', 'output', 'unresolved']}, indent=1))
raise SystemExit(0 if result.get('linked') and result.get('exit') == 0 else 1)
