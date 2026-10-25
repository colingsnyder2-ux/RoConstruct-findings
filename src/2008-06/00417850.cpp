// from server: 100% by king_originala
// roc 2008-06 00417850  unit: VCLuaFunction::?$CComContainedObject  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417850
//
// 00417850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00417854  83f803               cmp eax, 3
// 00417857  743b                 je 0x417894
// 00417859  85c0                 test eax, eax
// 0041785b  7511                 jne 0x41786e
// 0041785d  8b442408             mov eax, dword ptr [esp + 8]
// 00417861  85c0                 test eax, eax
// 00417863  7439                 je 0x41789e
// 00417865  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00417869  8b11                 mov edx, dword ptr [ecx]
// 0041786b  8910                 mov dword ptr [eax], edx
// 0041786d  c3                   ret 
// 0041786e  83f801               cmp eax, 1
// 00417871  742b                 je 0x41789e
// 00417873  56                   push esi
// 00417874  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00417878  8b0e                 mov ecx, dword ptr [esi]
// 0041787a  6890c29200           push 0x92c290
// 0041787f  ff1578288000         call dword ptr [0x802878]
// 00417885  0fb6c0               movzx eax, al
// 00417888  f7d8                 neg eax
// 0041788a  1bc0                 sbb eax, eax
// 0041788c  23442408             and eax, dword ptr [esp + 8]
// 00417890  8906                 mov dword ptr [esi], eax
// 00417892  5e                   pop esi
// 00417893  c3                   ret 
// 00417894  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417898  c70190c29200         mov dword ptr [ecx], 0x92c290
// 0041789e  c3                   ret 

struct TypeInfo { char data[1]; };

extern TypeInfo target_type;
extern bool (__thiscall *compare_types)(const TypeInfo*, const TypeInfo*);

void __cdecl f(void* source, void** destination, int operation)
{
    if (operation != 3)
    {
        if (operation == 0)
        {
            if (destination)
                *destination = *(void**)source;
        }
        else if (operation != 1)
        {
            *destination = compare_types((const TypeInfo*)*destination,
                                         &target_type) ? source : 0;
        }
    }
    else
    {
        *destination = &target_type;
    }
}
