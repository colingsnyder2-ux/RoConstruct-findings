"""Restore SDK lazy effect owners and implicit DepthBlur member destruction."""
import json
from pathlib import Path
from roc import integration

root = Path(__file__).parent
candidate = json.loads((root / 'meshfactory-overlay.json').read_text())
sdk = Path('tools/openrbx/Client/Rendering/RenderLib/EffectSettings.cpp').read_text()
start = sdk.index('G3D::ToneMap* EffectSettings::getToneMap()')
end = sdk.index('// STUB:', start)
body = sdk[start:end]
path = 'Rendering/RenderLib/EffectSettings.cpp'
anchor = '\t{\n\t}\n}'
assert Path('tools/rbxgs/Client/' + path).read_text().count(anchor) == 1
candidate.setdefault(path, []).extend([
    ['#include "RenderLib/EffectSettings.h"', '#include "RenderLib/EffectSettings.h"\n#include <memory>'],
    [anchor, '\t{\n' + body + '\n\t}\n}'],
])
path = 'Rendering/RenderLib/DepthBlur.cpp'
anchor = '\t\tDepthBlur::DepthBlur()'
candidate.setdefault(path, []).append([anchor,
    '\t\t// Genuine SDK uses implicit destruction of three reference pointers.\n'
    '\t\tDepthBlur::~DepthBlur() {}\n\n' + anchor])
base = json.loads((root / 'base-overlay.json').read_text())
(root / 'effect-cache-overlay.json').write_text(json.dumps(candidate, indent=1))
(root / 'effect-cache-patches.json').write_text(json.dumps(integration.overlay_delta(base, candidate), indent=1))
Path('rebuild/2008-06/patches/rbxgs-client.json').write_text(json.dumps(candidate, indent=1))
print('Prepared genuine lazy effect getters and member destructor; update remains unresolved')
