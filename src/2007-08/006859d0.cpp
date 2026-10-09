// from server: 87% by colin
// roc 2007-08 006859d0  unit: CInstanceRecord::CNameItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006859d0
//
// 006859d0  56                   push esi
// 006859d1  8bf1                 mov esi, ecx
// 006859d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006859d6  f7d0                 not eax
// 006859d8  a801                 test al, 1
// 006859da  7511                 jne 0x6859ed
// 006859dc  8d4e14               lea ecx, [esi + 0x14]
// 006859df  ff1598dd7700         call dword ptr [0x77dd98]
// 006859e5  50                   push eax
// 006859e6  6a02                 push 2
// 006859e8  e89bacfaff           call 0x630688
// 006859ed  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006859f0  83c101               add ecx, 1
// 006859f3  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 006859f6  7607                 jbe 0x6859ff
// 006859f8  8bce                 mov ecx, esi
// 006859fa  e82b2a0b00           call 0x73842a
// 006859ff  8b5628               mov edx, dword ptr [esi + 0x28]
// 00685a02  8a442408             mov al, byte ptr [esp + 8]
// 00685a06  8802                 mov byte ptr [edx], al
// 00685a08  83462801             add dword ptr [esi + 0x28], 1
// 00685a0c  8bc6                 mov eax, esi
// 00685a0e  5e                   pop esi
// 00685a0f  c20400               ret 4

struct CNameItem {
    char pad0[0x14];
    int field14;
    unsigned int field18;
    char pad1c[0xc];
    unsigned int field28;
    unsigned int field2c;
    void grow();
    CNameItem* addName(char c);
};

extern "C" int __stdcall sub_00630688(int, void*);
extern void* __stdcall sub_0077dd98(void*);
extern void sub_0073842a();

CNameItem* CNameItem::addName(char c)
{
    unsigned int v = ~field18;
    if ((v & 1) == 0) {
        void* p = sub_0077dd98(&field14);
        sub_00630688(2, p);
    }
    unsigned int idx = field28 + 1;
    if (idx > field2c) {
        grow();
    }
    char* dst = (char*)field28;
    *dst = c;
    field28 += 1;
    return this;
}
