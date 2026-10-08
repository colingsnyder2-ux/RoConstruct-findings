// from server: 72% by colin
// roc 2007-08 00627220  unit: RBX::SeparateStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627220
//
// 00627220  8b442404             mov eax, dword ptr [esp + 4]
// 00627224  83f802               cmp eax, 2
// 00627227  7506                 jne 0x62722f
// 00627229  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0062722c  c20400               ret 4
// 0062722f  8b4908               mov ecx, dword ptr [ecx + 8]
// 00627232  8b11                 mov edx, dword ptr [ecx]
// 00627234  89442404             mov dword ptr [esp + 4], eax
// 00627238  8b4218               mov eax, dword ptr [edx + 0x18]
// 0062723b  ffe0                 jmp eax

struct SeparateStage {
    int get(int index);
    char pad[8];
    void* field8;
    char pad2[0x18];
    int field24;
};

int SeparateStage::get(int index)
{
    if (index == 2)
        return field24;
    void* p = field8;
    int (__stdcall *fn)(int) = *(int (__stdcall **)(int))((*(int*)p) + 0x18);
    return fn(index);
}
