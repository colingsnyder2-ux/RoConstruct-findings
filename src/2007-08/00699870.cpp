// from server: 87% by colin
// roc 2007-08 00699870  unit: CXTPPropertyGridItem  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699870
//
// 00699870  56                   push esi
// 00699871  8bf1                 mov esi, ecx
// 00699873  e8c2ea0900           call 0x73833a
// 00699878  8d4e20               lea ecx, [esi + 0x20]
// 0069987b  c706fc167d00         mov dword ptr [esi], 0x7d16fc
// 00699881  e81afaffff           call 0x6992a0
// 00699886  8b442408             mov eax, dword ptr [esp + 8]
// 0069988a  894638               mov dword ptr [esi + 0x38], eax
// 0069988d  c74634ffffffff       mov dword ptr [esi + 0x34], 0xffffffff
// 00699894  8bc6                 mov eax, esi
// 00699896  5e                   pop esi
// 00699897  c20400               ret 4

struct CXTPPropertyGridItem {
    CXTPPropertyGridItem* f(int);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_6992a0();

CXTPPropertyGridItem* CXTPPropertyGridItem::f(int arg)
{
    sub_73833a();
    *(int*)((char*)this + 0x20) = 0x7d16fc;
    sub_6992a0();
    *(int*)((char*)this + 0x38) = arg;
    *(int*)((char*)this + 0x34) = -1;
    return this;
}
