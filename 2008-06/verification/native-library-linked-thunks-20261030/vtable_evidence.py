import json
import struct
from pathlib import Path

import pefile

root = Path.cwd()
folder = root / 'work/native-library-linked-thunks-20261030'
verified = json.loads((folder / 'verified.json').read_text())
vtables = json.loads((root / 'work/2008-06/vtables.json').read_text())
pe = pefile.PE(str(root / 'clients/2008-06/Roblox.exe'))
image = pe.get_memory_mapped_image()
base = pe.OPTIONAL_HEADER.ImageBase

# Manually identified class/symbol pairs; target vtable words are checked below.
anchors = {
    '00598c60': ('RBX::PartInstance', '?onChildAdded@PartInstance@RBX@@'),
    '00646970': ('RBX::MultiJoint', '?putInKernel@MultiJoint@RBX@@'),
    '00701300': ('CXTPTabClientWnd::CWorkspace', '?SetSelectedItem@CWorkspace@CXTPTabClientWnd@@'),
    '00701690': ('CXTPControlTabWorkspace', '?GetPaintManager@CXTPControlTabWorkspace@@'),
    '0072d5e0': ('CXTPRibbonTheme::CRibbonColorSet', '?RefreshMetrics@CRibbonColorSet@CXTPRibbonTheme@@'),
    '00745720': ('CXTPControlButton', '?Copy@CXTPControlButton@@'),
}
result = []
for target, (class_name, symbol_prefix) in anchors.items():
    rows = [row for row in verified if row['target'] == target
            and row['symbol'].startswith(symbol_prefix) and row['verified']]
    assert rows, target
    slots = []
    for table in vtables:
        if table['class'] != class_name:
            continue
        for index, slot in enumerate(table['slots']):
            if slot[0].lower() != target:
                continue
            va = int(table['vtable'], 16) + 4 * index
            offset = va - base
            assert 0 <= offset <= len(image) - 4
            assert struct.unpack_from('<I', image, offset)[0] == int(target, 16)
            slots.append({'vtable': table['vtable'], 'slot': index,
                          'pointer_address': '%08x' % va})
    assert slots, (target, class_name)
    result.append({'target': target, 'class': class_name, 'slots': slots,
                   'linked_proofs': rows})
(folder / 'vtable-evidence.json').write_text(json.dumps(result, indent=2) + '\n')
print('Checked %d candidate identities and %d target vtable pointers' %
      (len(result), sum(len(row['slots']) for row in result)))
