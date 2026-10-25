// from server: 100% by king_originala
// roc 2008-06 00427660  unit: CSelectionTreeCtrl  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427660
//
// 00427660  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00427664  56                   push esi
// 00427665  57                   push edi
// 00427666  85c0                 test eax, eax
// 00427668  7522                 jne 0x42768c
// 0042766a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042766e  8b38                 mov edi, dword ptr [eax]
// 00427670  6a20                 push 0x20
// 00427672  e8a9922700           call 0x6a0920
// 00427677  8bf0                 mov esi, eax
// 00427679  57                   push edi
// 0042767a  56                   push esi
// 0042767b  e890fc1400           call 0x577310
// 00427680  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00427684  83c40c               add esp, 0xc
// 00427687  5f                   pop edi
// 00427688  8931                 mov dword ptr [ecx], esi
// 0042768a  5e                   pop esi
// 0042768b  c3                   ret 
// 0042768c  83f801               cmp eax, 1
// 0042768f  7521                 jne 0x4276b2
// 00427691  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00427695  8b37                 mov esi, dword ptr [edi]
// 00427697  8d4e04               lea ecx, [esi + 4]
// 0042769a  ff1568248000         call dword ptr [0x802468]
// 004276a0  56                   push esi
// 004276a1  e8d48f2700           call 0x6a067a
// 004276a6  83c404               add esp, 4
// 004276a9  c70700000000         mov dword ptr [edi], 0
// 004276af  5f                   pop edi
// 004276b0  5e                   pop esi
// 004276b1  c3                   ret 
// 004276b2  8b742410             mov esi, dword ptr [esp + 0x10]
// 004276b6  8b0e                 mov ecx, dword ptr [esi]
// 004276b8  6890e39200           push 0x92e390
// 004276bd  ff1578288000         call dword ptr [0x802878]
// 004276c3  84c0                 test al, al
// 004276c5  740b                 je 0x4276d2
// 004276c7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004276cb  8b02                 mov eax, dword ptr [edx]
// 004276cd  5f                   pop edi
// 004276ce  8906                 mov dword ptr [esi], eax
// 004276d0  5e                   pop esi
// 004276d1  c3                   ret 
// 004276d2  5f                   pop edi
// 004276d3  c70600000000         mov dword ptr [esi], 0
// 004276d9  5e                   pop esi
// 004276da  c3                   ret 

extern "C" void* __cdecl allocate(unsigned int);
extern "C" void __cdecl construct(void*, const void*);
extern "C" void __cdecl deallocate(void*);

typedef void (__thiscall *StringDestructor)(void*);
typedef bool (__thiscall *TypeEquality)(const void*, const void*);

extern StringDestructor destroyString;
extern TypeEquality equalType;
extern const unsigned char typeDescriptor[];

void __cdecl manage(void** source, void** destination, int operation)
{
    if (operation == 0)
    {
        void* original = *source;
        void* copy = allocate(32);
        construct(copy, original);
        *destination = copy;
    }
    else if (operation == 1)
    {
        void* object = *destination;
        destroyString(static_cast<char*>(object) + 4);
        deallocate(object);
        *destination = 0;
    }
    else
    {
        if (equalType(*destination, typeDescriptor))
            *destination = *source;
        else
            *destination = 0;
    }
}
