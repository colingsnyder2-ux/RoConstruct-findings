// from server: 85% by colin
// roc 2007-08 00668d90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668d90
//
// 00668d90  56                   push esi
// 00668d91  8bf1                 mov esi, ecx
// 00668d93  8b4618               mov eax, dword ptr [esi + 0x18]
// 00668d96  f7d0                 not eax
// 00668d98  a801                 test al, 1
// 00668d9a  7511                 jne 0x668dad
// 00668d9c  8d4e14               lea ecx, [esi + 0x14]
// 00668d9f  ff1598dd7700         call dword ptr [0x77dd98]
// 00668da5  50                   push eax
// 00668da6  6a02                 push 2
// 00668da8  e8db78fcff           call 0x630688
// 00668dad  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00668db0  83c104               add ecx, 4
// 00668db3  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00668db6  7607                 jbe 0x668dbf
// 00668db8  8bce                 mov ecx, esi
// 00668dba  e86bf60c00           call 0x73842a
// 00668dbf  8b5628               mov edx, dword ptr [esi + 0x28]
// 00668dc2  d9442408             fld dword ptr [esp + 8]
// 00668dc6  d91a                 fstp dword ptr [edx]
// 00668dc8  83462804             add dword ptr [esi + 0x28], 4
// 00668dcc  8bc6                 mov eax, esi
// 00668dce  5e                   pop esi
// 00668dcf  c20400               ret 4

struct CXTTreeBase
{
    char pad0[0x14];
    int field14;
    int field18;
    char pad1C[0xC];
    int field28;
    int field2C;
    CXTTreeBase* method(float arg);
};

extern "C" int __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_73842a();
extern "C" int __stdcall sub_77dd98();

CXTTreeBase* CXTTreeBase::method(float arg)
{
    if ((~field18 & 1) == 0)
    {
        sub_630688(2, sub_77dd98());
    }
    int* p = (int*)field28;
    p = (int*)((char*)p + 4);
    if ((unsigned int)p > (unsigned int)field2C)
    {
        sub_73842a();
    }
    *(float*)field28 = arg;
    field28 += 4;
    return this;
}
