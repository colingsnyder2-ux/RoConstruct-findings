"""Build a coherent private overlay; preserve vendor files and the accepted baseline."""
import collections
import json
import re
from pathlib import Path
from roc import native_sweep

root = Path(__file__).parent
tree = Path('tools/rbxgs/Client')
overlay = Path('rebuild/2008-06/out/RbxgsApp/overlay')
registry = Path('rebuild/2008-06/patches/rbxgs-client.json')
base = json.loads(registry.read_text())
baseline = root / 'baseline-overlay.json'
if baseline.exists():
    assert json.loads(baseline.read_text()) == base, 'Preserve the existing candidate before starting again'
else:
    baseline.write_text(json.dumps(base, indent=1))
candidate = json.loads(json.dumps(base))
canonical = {name.casefold(): name for name in base}
headers = json.loads((root / 'headers.json').read_text())
tags = set(json.loads((root / 'tags.json').read_text()))
genuine = json.loads((root / 'genuine-tag-definitions.json').read_text())
for rel, edits in headers.items():
    rel = canonical.get(rel.casefold(), rel)
    candidate.setdefault(rel, []).extend(edits)

files = {}
for part in ('App', 'Network', 'RbxGraphics', 'RbxView', 'Rendering'):
    for directory in (tree / part, overlay / part):
        for path in directory.rglob('*.cpp'):
            if path.name.startswith('roc_'):
                continue
            rel = path.relative_to(directory.parent).as_posix()
            actual = overlay / rel
            files[rel] = (actual if actual.exists() else tree / rel).read_text(errors='replace')
existing = collections.defaultdict(list)
pattern = re.compile(r'\b(?:const\s+char\s*\*\s*|char\s+)((?:\w+::)*s\w+)\s*(?:\[\s*\])?\s*=\s*("[^"\n]*")\s*;')
for rel, text in files.items():
    for m in pattern.finditer(text):
        if m[1].split('::')[-1] in tags:
            existing[m[1].split('::')[-1]].append(rel)

additions = collections.defaultdict(list)
moved = set()
for name, definitions in genuine.items():
    rel, declaration = definitions[0]
    if rel not in files or existing[name]:
        continue
    text = (Path('tools/openrbx/Client') / rel).read_text()
    before = text[:text.index(declaration)]
    stack = []
    for token in re.finditer(r'\bnamespace\s+(\w+)\s*\{|[{}]', native_sweep.masked_cpp(before)):
        if token[1]:
            stack.append(token[1])
        elif token[0] == '{':
            stack.append(None)
        else:
            stack.pop()
    namespace = '::'.join(n for n in stack if n)
    assert not namespace or namespace.startswith('RBX'), (rel, name)
    additions[rel].append(declaration.replace(name, (namespace + '::' if namespace else '') + name, 1))
    moved.add(name)

for rel, old in files.items():
    def definition(m):
        return 'char ' + m[1] + '[] = ' + m[2] + ';' if m[1].split('::')[-1] in tags else m[0]
    new = pattern.sub(definition, old)
    new = re.sub(r'&((?:\w+::)*)(s\w+)\b', lambda m: m[1] + m[2] if m[2] in tags else m[0], new)
    new = re.sub(r'const char\*\*\s+ClassName\b', 'const char* ClassName', new).replace('*ClassName', 'ClassName')
    if rel in additions:
        new += '\n// Native class-name arrays, declared in the genuine class translation units.\n' + '\n'.join(additions[rel]) + '\n'
    if new != old:
        rel = canonical.get(rel.casefold(), rel)
        candidate.setdefault(rel, []).append([old, new])

# One provider per filename: the real source layer replaces the old support object.
old_glue = Path('rebuild/2008-06/glue/rbxgs/glue_class_names.cpp').read_text()
def glue_definition(m):
    if m[1].split('::')[-1] in moved:
        return ''
    return 'char ' + m[1] + '[] = ' + m[2] + ';' if m[1].split('::')[-1] in tags else m[0]
new_glue = pattern.sub(glue_definition, old_glue)
rel = 'App/util/glue_class_names.cpp'
assert rel not in candidate and not (tree / rel).exists()
candidate[rel] = [['', new_glue]]
(root / 'candidate-overlay.json').write_text(json.dumps(candidate, indent=1))
(root / 'migration-summary.json').write_text(json.dumps(dict(header_files=len(headers), moved_tag_definitions=sorted(moved),
                                                          source_files=sorted(k for k in candidate if candidate[k] != base.get(k))), indent=1))
registry.write_text(json.dumps(candidate, indent=1))
print('Candidate prepared:', len(headers), 'headers;', len(moved), 'genuine arrays moved into owning source files')
