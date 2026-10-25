// from server: 100% by king_originala
// roc 2008-06 004a6cd0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6cd0
//
// 004a6cd0  56                   push esi
// 004a6cd1  8b742408             mov esi, dword ptr [esp + 8]
// 004a6cd5  57                   push edi
// 004a6cd6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a6cda  57                   push edi
// 004a6cdb  56                   push esi
// 004a6cdc  e84ff7ffff           call 0x4a6430
// 004a6ce1  8d4704               lea eax, [edi + 4]
// 004a6ce4  50                   push eax
// 004a6ce5  56                   push esi
// 004a6ce6  e845f7ffff           call 0x4a6430
// 004a6ceb  83c708               add edi, 8
// 004a6cee  57                   push edi
// 004a6cef  56                   push esi
// 004a6cf0  e83bf7ffff           call 0x4a6430
// 004a6cf5  83c418               add esp, 0x18
// 004a6cf8  5f                   pop edi
// 004a6cf9  8bc6                 mov eax, esi
// 004a6cfb  5e                   pop esi
// 004a6cfc  c3                   ret 

extern void __cdecl transfer(void *destination, const float *source);

void *__cdecl copy_three(void *destination, const float *source)
{
    transfer(destination, source);
    transfer(destination, source + 1);
    transfer(destination, source + 2);
    return destination;
}
