// from server: 11% by colin
// roc 2010-06 005bd950  unit: RBX::VBasicPartInstance::?$ActionStation  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bd950
//
// 005bd950  8d816cffffff         lea eax, [ecx - 0x94]
// 005bd956  c3                   ret 

struct VBasicPartInstance {
    // Placeholder for the actual structure layout
    char padding[0x94];
    int desiredMember;
};

extern "C" __declspec(dllimport) int getDesiredMember(VBasicPartInstance* instance);

int getDesiredMember(VBasicPartInstance* instance) {
    return instance->desiredMember;
}
