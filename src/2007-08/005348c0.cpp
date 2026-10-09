// from server: 100% by colin
// roc 2007-08 005348c0  unit: RBX::ScriptContext  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005348c0
//
// 005348c0  56                   push esi
// 005348c1  57                   push edi
// 005348c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005348c6  6a04                 push 4
// 005348c8  57                   push edi
// 005348c9  e8e29c0800           call 0x5be5b0
// 005348ce  8bf0                 mov esi, eax
// 005348d0  83c408               add esp, 8
// 005348d3  85f6                 test esi, esi
// 005348d5  7406                 je 0x5348dd
// 005348d7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005348db  8906                 mov dword ptr [esi], eax
// 005348dd  8b0d7cbe8a00         mov ecx, dword ptr [0x8abe7c]
// 005348e3  51                   push ecx
// 005348e4  68f0d8ffff           push 0xffffd8f0
// 005348e9  57                   push edi
// 005348ea  e811950800           call 0x5bde00
// 005348ef  6afe                 push -2
// 005348f1  57                   push edi
// 005348f2  e869980800           call 0x5be160
// 005348f7  83c414               add esp, 0x14
// 005348fa  5f                   pop edi
// 005348fb  8bc6                 mov eax, esi
// 005348fd  5e                   pop esi
// 005348fe  c3                   ret 

extern int G_008abe7c;

extern void* __cdecl func_005be5b0(void* ptr, int size);
extern void __cdecl func_005bde00(void* ptr, int value, int arg);
extern void __cdecl func_005be160(void* ptr, int value);

void* __cdecl func_005348c0(void* ptr, int value)
{
    void* result = func_005be5b0(ptr, 4);
    if (result != 0) {
        *(int*)result = value;
    }
    func_005bde00(ptr, -10000, G_008abe7c);
    func_005be160(ptr, -2);
    return result;
}
