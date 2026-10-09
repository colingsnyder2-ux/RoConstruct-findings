// from server: 91% by colin
// roc 2007-08 00685b10  unit: CInstanceRecord::CNameItem  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685b10
//
// 00685b10  56                   push esi
// 00685b11  8bf1                 mov esi, ecx
// 00685b13  f6461801             test byte ptr [esi + 0x18], 1
// 00685b17  7511                 jne 0x685b2a
// 00685b19  8d4e14               lea ecx, [esi + 0x14]
// 00685b1c  ff1598dd7700         call dword ptr [0x77dd98]
// 00685b22  50                   push eax
// 00685b23  6a04                 push 4
// 00685b25  e85eabfaff           call 0x630688
// 00685b2a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685b2d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00685b30  8d5002               lea edx, [eax + 2]
// 00685b33  3bd1                 cmp edx, ecx
// 00685b35  760d                 jbe 0x685b44
// 00685b37  2bc1                 sub eax, ecx
// 00685b39  83c002               add eax, 2
// 00685b3c  50                   push eax
// 00685b3d  8bce                 mov ecx, esi
// 00685b3f  e8ec280b00           call 0x738430
// 00685b44  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685b47  668b08               mov cx, word ptr [eax]
// 00685b4a  8b542408             mov edx, dword ptr [esp + 8]
// 00685b4e  66890a               mov word ptr [edx], cx
// 00685b51  83462802             add dword ptr [esi + 0x28], 2
// 00685b55  8bc6                 mov eax, esi
// 00685b57  5e                   pop esi
// 00685b58  c20400               ret 4

struct CNameItem {
    char pad0[0x14];
    int field14;
    char pad18[0x10];
    int field28;
    int field2c;
    CNameItem* method(unsigned short* out);
};

extern "C" void* __stdcall sub_77dd98(int);
extern "C" int __stdcall sub_630688(int, void*);
extern "C" void __stdcall sub_738430(int);

CNameItem* CNameItem::method(unsigned short* out)
{
    if ((*(unsigned char*)((char*)this + 0x18) & 1) == 0) {
        void* p = sub_77dd98((int)((char*)this + 0x14));
        sub_630688(4, p);
    }
    int a = this->field28;
    int b = this->field2c;
    if ((unsigned)(a + 2) > (unsigned)b) {
        sub_738430(a - b + 2);
    }
    unsigned short v = *(unsigned short*)this->field28;
    *out = v;
    this->field28 += 2;
    return this;
}
