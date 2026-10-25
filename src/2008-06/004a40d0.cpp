// from server: 100% by king_originala
// roc 2008-06 004a40d0  unit: RBX::VHint::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a40d0
//
// 004a40d0  8b442404             mov eax, dword ptr [esp + 4]
// 004a40d4  50                   push eax
// 004a40d5  e8f657feff           call 0x4898d0
// 004a40da  83c404               add esp, 4
// 004a40dd  85c0                 test eax, eax
// 004a40df  7411                 je 0x4a40f2
// 004a40e1  8bc8                 mov ecx, eax
// 004a40e3  e858fdffff           call 0x4a3e40
// 004a40e8  33c9                 xor ecx, ecx
// 004a40ea  85c0                 test eax, eax
// 004a40ec  0f95c1               setne cl
// 004a40ef  8ac1                 mov al, cl
// 004a40f1  c3                   ret 
// 004a40f2  33c0                 xor eax, eax
// 004a40f4  33c9                 xor ecx, ecx
// 004a40f6  85c0                 test eax, eax
// 004a40f8  0f95c1               setne cl
// 004a40fb  8ac1                 mov al, cl
// 004a40fd  c3                   ret 

struct S {
    void* get();
};

extern S* __cdecl lookup(void*);

bool __cdecl check(void* value)
{
    S* object = lookup(value);
    return (object ? object->get() : 0) != 0;
}
