// from server: 69% by atomic.potato
// roc 2010-06 007218e0  unit: RBX::UniversalTool  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007218e0
//
// 007218e0  8b442408             mov eax, dword ptr [esp + 8]
// 007218e4  56                   push esi
// 007218e5  8b742408             mov esi, dword ptr [esp + 8]
// 007218e9  8bce                 mov ecx, esi
// 007218eb  e8b0f4ffff           call 0x720da0
// 007218f0  8b4808               mov ecx, dword ptr [eax + 8]
// 007218f3  8bd1                 mov edx, ecx
// 007218f5  83ea05               sub edx, 5
// 007218f8  7418                 je 0x721912
// 007218fa  83ea02               sub edx, 2
// 007218fd  740c                 je 0x72190b
// 007218ff  8b4610               mov eax, dword ptr [esi + 0x10]
// 00721902  8b8c8898000000       mov ecx, dword ptr [eax + ecx*4 + 0x98]
// 00721909  eb0c                 jmp 0x721917
// 0072190b  8b08                 mov ecx, dword ptr [eax]
// 0072190d  8b4908               mov ecx, dword ptr [ecx + 8]
// 00721910  eb05                 jmp 0x721917
// 00721912  8b10                 mov edx, dword ptr [eax]
// 00721914  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00721917  85c9                 test ecx, ecx
// 00721919  7504                 jne 0x72191f
// 0072191b  33c0                 xor eax, eax
// 0072191d  5e                   pop esi
// 0072191e  c3                   ret 
// 0072191f  8b4608               mov eax, dword ptr [esi + 8]
// 00721922  8908                 mov dword ptr [eax], ecx
// 00721924  c7400805000000       mov dword ptr [eax + 8], 5
// 0072192b  83460810             add dword ptr [esi + 8], 0x10
// 0072192f  b801000000           mov eax, 1
// 00721934  5e                   pop esi
// 00721935  c3                   ret 

struct UniversalTool {
    char pad0[8];
    int* field8;
    char padC[4];
    int* field10;
    int get(int idx);
    int __cdecl set(int idx, int val);
};

int UniversalTool::set(int idx, int val) {
    int* p = (int*)this->get(idx);
    int t = p[2];
    int v;
    if (t == 5) {
        v = *(int*)(*(int*)p + 0xc);
    } else if (t == 7) {
        v = *(int*)(*(int*)p + 8);
    } else {
        v = *(int*)((char*)this->field10 + t * 4 + 0x98);
    }
    if (v == 0)
        return 0;
    int* dst = this->field8;
    *dst = v;
    dst[2] = 5;
    this->field8 = dst + 4;
    return 1;
}
