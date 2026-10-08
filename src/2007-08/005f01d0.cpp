// from server: 56% by colin
// roc 2007-08 005f01d0  unit: RBX::Message  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f01d0
//
// 005f01d0  53                   push ebx
// 005f01d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005f01d5  56                   push esi
// 005f01d6  57                   push edi
// 005f01d7  8bf1                 mov esi, ecx
// 005f01d9  8dbef8000000         lea edi, [esi + 0xf8]
// 005f01df  53                   push ebx
// 005f01e0  57                   push edi
// 005f01e1  ff1530e67700         call dword ptr [0x77e630]
// 005f01e7  83c408               add esp, 8
// 005f01ea  84c0                 test al, al
// 005f01ec  7415                 je 0x5f0203
// 005f01ee  53                   push ebx
// 005f01ef  8bcf                 mov ecx, edi
// 005f01f1  ff1590e67700         call dword ptr [0x77e690]
// 005f01f7  688c778c00           push 0x8c778c
// 005f01fc  8bce                 mov ecx, esi
// 005f01fe  e80d45e5ff           call 0x444710
// 005f0203  5f                   pop edi
// 005f0204  5e                   pop esi
// 005f0205  5b                   pop ebx
// 005f0206  c20400               ret 4

struct Message {
    char pad[0xf8];
    void setText(const void* value);
};

extern "C" int __stdcall sub_77E630(const void*, const void*);
extern "C" void* __stdcall sub_77E690(void*, const void*);
extern "C" void __cdecl sub_444710(void*, const void*);

void Message::setText(const void* value)
{
    if (sub_77E630(pad + 0xf8, value)) {
        sub_77E690(pad + 0xf8, value);
        sub_444710(this, (const void*)0x8c778c);
    }
}
