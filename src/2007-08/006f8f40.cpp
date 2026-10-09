// from server: 78% by colin
// roc 2007-08 006f8f40  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8f40
//
// 006f8f40  56                   push esi
// 006f8f41  6a00                 push 0
// 006f8f43  8bf1                 mov esi, ecx
// 006f8f45  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f8f49  6a01                 push 1
// 006f8f4b  e830f4f9ff           call 0x698380
// 006f8f50  85c0                 test eax, eax
// 006f8f52  742e                 je 0x6f8f82
// 006f8f54  8b4030               mov eax, dword ptr [eax + 0x30]
// 006f8f57  83f8ff               cmp eax, -1
// 006f8f5a  7426                 je 0x6f8f82
// 006f8f5c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f8f5f  6a00                 push 0
// 006f8f61  50                   push eax
// 006f8f62  e8599bf8ff           call 0x682ac0
// 006f8f67  8bc8                 mov ecx, eax
// 006f8f69  e8424af5ff           call 0x64d9b0
// 006f8f6e  85c0                 test eax, eax
// 006f8f70  7410                 je 0x6f8f82
// 006f8f72  8bc8                 mov ecx, eax
// 006f8f74  e8f7a8f5ff           call 0x653870
// 006f8f79  8d4805               lea ecx, [eax + 5]
// 006f8f7c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f8f80  0108                 add dword ptr [eax], ecx
// 006f8f82  5e                   pop esi
// 006f8f83  c20800               ret 8

struct CXTPPropertyGridPaintManager {
    void AdjustSize(int, int);
};

extern "C" int __stdcall sub_698380(int, int, int);
extern "C" int __stdcall sub_682ac0(int, int, int);
extern "C" int __stdcall sub_64d9b0(int);
extern "C" int __stdcall sub_653870(int);

void CXTPPropertyGridPaintManager::AdjustSize(int a, int b)
{
    int* p = (int*)&a;
    int v = sub_698380(*(int*)((char*)this + 0x0c), 1, 0);
    if (v != 0) {
        int w = *(int*)(v + 0x30);
        if (w != -1) {
            int r = sub_682ac0(*(int*)((char*)this + 0x20), w, 0);
            int s = sub_64d9b0(r);
            if (s != 0) {
                int t = sub_653870(s);
                *p += t + 5;
            }
        }
    }
}
