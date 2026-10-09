// from server: 91% by colin
// roc 2007-08 00685ac0  unit: CInstanceRecord::CNameItem  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685ac0
//
// 00685ac0  56                   push esi
// 00685ac1  8bf1                 mov esi, ecx
// 00685ac3  f6461801             test byte ptr [esi + 0x18], 1
// 00685ac7  7511                 jne 0x685ada
// 00685ac9  8d4e14               lea ecx, [esi + 0x14]
// 00685acc  ff1598dd7700         call dword ptr [0x77dd98]
// 00685ad2  50                   push eax
// 00685ad3  6a04                 push 4
// 00685ad5  e8aeabfaff           call 0x630688
// 00685ada  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685add  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00685ae0  8d5001               lea edx, [eax + 1]
// 00685ae3  3bd1                 cmp edx, ecx
// 00685ae5  760d                 jbe 0x685af4
// 00685ae7  2bc1                 sub eax, ecx
// 00685ae9  83c001               add eax, 1
// 00685aec  50                   push eax
// 00685aed  8bce                 mov ecx, esi
// 00685aef  e83c290b00           call 0x738430
// 00685af4  8b4628               mov eax, dword ptr [esi + 0x28]
// 00685af7  8a08                 mov cl, byte ptr [eax]
// 00685af9  8b542408             mov edx, dword ptr [esp + 8]
// 00685afd  880a                 mov byte ptr [edx], cl
// 00685aff  83462801             add dword ptr [esi + 0x28], 1
// 00685b03  8bc6                 mov eax, esi
// 00685b05  5e                   pop esi
// 00685b06  c20400               ret 4

struct CNameItem {
    char pad[0x14];
    int field14;
    char pad2[0x10];
    int field28;
    int field2c;
    CNameItem* method(char* out);
};

extern "C" int __stdcall sub_630688(int, void*);
extern "C" int __stdcall sub_738430(int);

int __stdcall getSomething(int*);

CNameItem* CNameItem::method(char* out)
{
    if ((*(unsigned char*)((char*)this + 0x18) & 1) == 0) {
        int v = getSomething((int*)((char*)this + 0x14));
        sub_630688(4, (void*)v);
    }
    int a = *(int*)((char*)this + 0x28);
    int b = *(int*)((char*)this + 0x2c);
    if ((unsigned)(a + 1) > (unsigned)b) {
        sub_738430(a - b + 1);
    }
    *out = *(char*)(*(int*)((char*)this + 0x28));
    *(int*)((char*)this + 0x28) += 1;
    return this;
}
