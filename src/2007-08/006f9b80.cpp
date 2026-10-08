// from server: 40% by colin
// roc 2007-08 006f9b80  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f9b80
//
// 006f9b80  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006f9b83  8b4854               mov ecx, dword ptr [eax + 0x54]
// 006f9b86  83c04c               add eax, 0x4c
// 006f9b89  83f9ff               cmp ecx, -1
// 006f9b8c  7515                 jne 0x6f9ba3
// 006f9b8e  8b4004               mov eax, dword ptr [eax + 4]
// 006f9b91  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f9b95  50                   push eax
// 006f9b96  8d44240c             lea eax, [esp + 0xc]
// 006f9b9a  50                   push eax
// 006f9b9b  e8106df3ff           call 0x6308b0
// 006f9ba0  c21400               ret 0x14
// 006f9ba3  8bc1                 mov eax, ecx
// 006f9ba5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f9ba9  50                   push eax
// 006f9baa  8d44240c             lea eax, [esp + 0xc]
// 006f9bae  50                   push eax
// 006f9baf  e8fc6cf3ff           call 0x6308b0
// 006f9bb4  c21400               ret 0x14

struct CXTPPropertyGridPaintManager {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;

    int sub_6f9b80(int a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_6308b0(int, int);

int CXTPPropertyGridPaintManager::sub_6f9b80(int a, int b, int c, int d, int e)
{
    int* p = (int*)this->field34;
    int v = p[0x54 / 4];
    int* q = (int*)((char*)p + 0x4c);
    if (v == -1) {
        v = q[1];
    }
    int tmp;
    return sub_6308b0((int)&tmp, v);
}
