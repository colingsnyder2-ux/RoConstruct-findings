"""Keep only changed source text in the upload; preserve accepted recipe guards."""
import difflib
import json
from pathlib import Path
from roc import integration

root = Path(__file__).parent
base = json.loads((root / 'baseline-overlay.json').read_text())
candidate = json.loads((root / 'candidate-overlay.json').read_text())
minimized = json.loads(json.dumps(base))
for rel, edits in candidate.items():
    previous = base.get(rel, [])
    assert edits[:len(previous)] == previous
    for old, new in edits[len(previous):]:
        if not old:
            minimized.setdefault(rel, []).append([old, new])
            continue
        current = old
        while current != new:
            old_lines, new_lines = current.splitlines(True), new.splitlines(True)
            ops = difflib.SequenceMatcher(None, old_lines, new_lines, autojunk=False).get_opcodes()
            index = next(i for i, op in enumerate(ops) if op[0] != 'equal')
            _, ia, ib, ic, id_ = ops[index]
            a, b = sum(map(len, old_lines[:ia])), sum(map(len, old_lines[:ib]))
            c, d = sum(map(len, new_lines[:ic])), sum(map(len, new_lines[:id_]))
            right_limit = sum(map(len, old_lines[ib:ops[index + 1][2]])) if index + 1 < len(ops) else 0
            context = 20
            while True:
                left, right = min(context, a), min(context, right_limit)
                before = current[a-left:b+right]
                after = new[c-left:d+right]
                if before and current.count(before) == 1:
                    break
                context *= 2
                assert context <= 2 * (len(current) + 1), rel
            minimized.setdefault(rel, []).append([before, after])
            changed = current.replace(before, after, 1)
            assert changed != current
            current = changed
delta = integration.overlay_delta(base, minimized)
(root / 'candidate-minimized.json').write_text(json.dumps(minimized, indent=1))
(root / 'submission.json').write_text(json.dumps(delta, indent=1))
print('Validated native upload syntax:', len(delta), 'paths;', len(json.dumps(delta)), 'bytes')
