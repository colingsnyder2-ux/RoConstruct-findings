// from server: 91% by colin
// roc 2007-08 00685b60  unit: CInstanceRecord::CNameItem  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685b60
//
// 00685b60  56                   push esi
// 00685b61  8bf1                 mov esi, ecx
// 00685b63  f6461801             test byte ptr [esi + 0x18], 1
// 00685b67  7511                 jne 0x685b7a
// 00685b69  8d4e14               lea ecx, [esi + 0x14]
// 00685b6c  ff1598dd7700         call dword ptr [0x77dd98]
// 00685b72  50                   push eax
// 00685b73  6a04                 push 4
// 00685b75  e80eabfaff           call 0x630688
// 00685b7a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685b7d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00685b80  8d5008               lea edx, [eax + 8]
// 00685b83  3bd1                 cmp edx, ecx
// 00685b85  760d                 jbe 0x685b94
// 00685b87  2bc1                 sub eax, ecx
// 00685b89  83c008               add eax, 8
// 00685b8c  50                   push eax
// 00685b8d  8bce                 mov ecx, esi
// 00685b8f  e89c280b00           call 0x738430
// 00685b94  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685b97  dd00                 fld qword ptr [eax]
// 00685b99  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00685b9d  dd19                 fstp qword ptr [ecx]
// 00685b9f  83462808             add dword ptr [esi + 0x28], 8
// 00685ba3  8bc6                 mov eax, esi
// 00685ba5  5e                   pop esi
// 00685ba6  c20400               ret 4

struct CNameItem {
    char pad0[0x14];
    int field14;
    char pad18[0x10];
    int field28;
    int field2c;
    void* method(int);
};

extern "C" int __stdcall sub_00630688(int, void*);
extern "C" int __stdcall sub_00738430(void*, int);
extern "C" void* __stdcall sub_0077dd98(void*);

void* CNameItem::method(int arg)
{
    if ((*(unsigned char*)((char*)this + 0x18) & 1) == 0) {
        void* p = sub_0077dd98((char*)this + 0x14);
        sub_00630688(4, p);
    }
    int a = *(int*)((char*)this + 0x28);
    int b = *(int*)((char*)this + 0x2c);
    if ((unsigned int)(a + 8) > (unsigned int)b) {
        sub_00738430(this, a - b + 8);
    }
    int src = *(int*)((char*)this + 0x28);
    *(double*)arg = *(double*)src;
    *(int*)((char*)this + 0x28) += 8;
    return this;
}
