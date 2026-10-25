// from server: 100% by king_originala
// roc 2008-06 00596cd0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596cd0
//
// 00596cd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596cd4  56                   push esi
// 00596cd5  57                   push edi
// 00596cd6  85c0                 test eax, eax
// 00596cd8  7522                 jne 0x596cfc
// 00596cda  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596cde  8b38                 mov edi, dword ptr [eax]
// 00596ce0  6a50                 push 0x50
// 00596ce2  e8399c1000           call 0x6a0920
// 00596ce7  8bf0                 mov esi, eax
// 00596ce9  57                   push edi
// 00596cea  56                   push esi
// 00596ceb  e860fdffff           call 0x596a50
// 00596cf0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00596cf4  83c40c               add esp, 0xc
// 00596cf7  5f                   pop edi
// 00596cf8  8931                 mov dword ptr [ecx], esi
// 00596cfa  5e                   pop esi
// 00596cfb  c3                   ret 
// 00596cfc  83f801               cmp eax, 1
// 00596cff  7520                 jne 0x596d21
// 00596d01  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00596d05  8b37                 mov esi, dword ptr [edi]
// 00596d07  8d4e08               lea ecx, [esi + 8]
// 00596d0a  e861f7ffff           call 0x596470
// 00596d0f  56                   push esi
// 00596d10  e865991000           call 0x6a067a
// 00596d15  83c404               add esp, 4
// 00596d18  c70700000000         mov dword ptr [edi], 0
// 00596d1e  5f                   pop edi
// 00596d1f  5e                   pop esi
// 00596d20  c3                   ret 
// 00596d21  8b742410             mov esi, dword ptr [esp + 0x10]
// 00596d25  8b0e                 mov ecx, dword ptr [esi]
// 00596d27  68f89a9400           push 0x949af8
// 00596d2c  ff1578288000         call dword ptr [0x802878]
// 00596d32  84c0                 test al, al
// 00596d34  740b                 je 0x596d41
// 00596d36  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00596d3a  8b02                 mov eax, dword ptr [edx]
// 00596d3c  5f                   pop edi
// 00596d3d  8906                 mov dword ptr [esi], eax
// 00596d3f  5e                   pop esi
// 00596d40  c3                   ret 
// 00596d41  5f                   pop edi
// 00596d42  c70600000000         mov dword ptr [esi], 0
// 00596d48  5e                   pop esi
// 00596d49  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void __cdecl construct(void*, void*);

struct Payload {
    void destroy();
};

struct TypeTag;
extern const TypeTag target_type;
extern bool (__thiscall *type_equal)(const void*, const TypeTag*);

void __cdecl manage(void** source, void** destination, int operation)
{
    if (operation == 0) {
        void* value = *source;
        void* storage = operator new(0x50);
        construct(storage, value);
        *destination = storage;
    } else if (operation == 1) {
        void* storage = *destination;
        reinterpret_cast<Payload*>(static_cast<char*>(storage) + 8)->destroy();
        operator delete(storage);
        *destination = 0;
    } else {
        if (type_equal(*destination, &target_type))
            *destination = *source;
        else
            *destination = 0;
    }
}
