// from server: 100% by colin
// roc 2007-08 00697e00  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697e00
//
// 00697e00  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00697e06  83f8ff               cmp eax, -1
// 00697e09  740a                 je 0x697e15
// 00697e0b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00697e0f  894110               mov dword ptr [ecx + 0x10], eax
// 00697e12  c20400               ret 4
// 00697e15  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00697e1b  83f801               cmp eax, 1
// 00697e1e  7e13                 jle 0x697e33
// 00697e20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00697e24  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00697e27  83ea04               sub edx, 4
// 00697e2a  0fafd0               imul edx, eax
// 00697e2d  83c204               add edx, 4
// 00697e30  895110               mov dword ptr [ecx + 0x10], edx
// 00697e33  c20400               ret 4

struct CXTPPropertyGridItem {
    int GetValue(int* p);
};

int CXTPPropertyGridItem::GetValue(int* p) {
    int v = *(int*)((char*)this + 0xf4);
    if (v != -1) {
        *(int*)((char*)p + 0x10) = v;
        return v;
    }
    int n = *(int*)((char*)this + 0xf8);
    if (n > 1) {
        int t = *(int*)((char*)p + 0x10);
        t = (t - 4) * n + 4;
        *(int*)((char*)p + 0x10) = t;
    }
    return n;
}
