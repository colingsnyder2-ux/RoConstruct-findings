// from server: 85% by colin
// from server: 84% by king_originala
// roc 2008-06 005abf90  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005abf90
//
// 005abf90  83ec08               sub esp, 8
// 005abf93  53                   push ebx
// 005abf94  55                   push ebp
// 005abf95  56                   push esi
// 005abf96  8b742418             mov esi, dword ptr [esp + 0x18]
// 005abf9a  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005abf9d  33ed                 xor ebp, ebp
// 005abf9f  57                   push edi
// 005abfa0  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 005abfa3  7606                 jbe 0x5abfab
// 005abfa5  ff1590288000         call dword ptr [0x802890]
// 005abfab  8b4610               mov eax, dword ptr [esi + 0x10]
// 005abfae  8b3e                 mov edi, dword ptr [esi]
// 005abfb0  8944241c             mov dword ptr [esp + 0x1c], eax
// 005abfb4  39460c               cmp dword ptr [esi + 0xc], eax
// 005abfb7  7606                 jbe 0x5abfbf
// 005abfb9  ff1590288000         call dword ptr [0x802890]
// 005abfbf  8b06                 mov eax, dword ptr [esi]
// 005abfc1  89442410             mov dword ptr [esp + 0x10], eax
// 005abfc5  85ff                 test edi, edi
// 005abfc7  7406                 je 0x5abfcf
// 005abfc9  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005abfcd  740a                 je 0x5abfd9
// 005abfcf  8b3590288000         mov esi, dword ptr [0x802890]
// 005abfd5  ffd6                 call esi
// 005abfd7  eb06                 jmp 0x5abfdf
// 005abfd9  8b3590288000         mov esi, dword ptr [0x802890]
// 005abfdf  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005abfe3  743b                 je 0x5ac020
// 005abfe5  85ff                 test edi, edi
// 005abfe7  752f                 jne 0x5ac018
// 005abfe9  ffd6                 call esi
// 005abfeb  33c0                 xor eax, eax
// 005abfed  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 005abff0  7202                 jb 0x5abff4
// 005abff2  ffd6                 call esi
// 005abff4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005abff8  51                   push ecx
// 005abff9  53                   push ebx
// 005abffa  e851faffff           call 0x5aba50
// 005abfff  83c408               add esp, 8
// 005ac002  03e8                 add ebp, eax
// 005ac004  85ff                 test edi, edi
// 005ac006  7514                 jne 0x5ac01c
// 005ac008  ffd6                 call esi
// 005ac00a  33c0                 xor eax, eax
// 005ac00c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 005ac00f  7202                 jb 0x5ac013
// 005ac011  ffd6                 call esi
// 005ac013  83c308               add ebx, 8
// 005ac016  ebad                 jmp 0x5abfc5
// 005ac018  8b07                 mov eax, dword ptr [edi]
// 005ac01a  ebd1                 jmp 0x5abfed
// 005ac01c  8b07                 mov eax, dword ptr [edi]
// 005ac01e  ebec                 jmp 0x5ac00c
// 005ac020  5f                   pop edi
// 005ac021  5e                   pop esi
// 005ac022  8bc5                 mov eax, ebp
// 005ac024  5d                   pop ebp
// 005ac025  5b                   pop ebx
// 005ac026  83c408               add esp, 8
// 005ac029  c3                   ret 

struct Item {
    unsigned char data[8];
};

struct Container {
    Container** proxy;
    unsigned char padding[8];
    Item* first;
    Item* last;
};

struct Iterator {
    Container** proxy;
    Item* position;
};

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern int __cdecl processItem(Item*, void*);

int __cdecl processRange(Container* container, void* argument)
{
    Iterator current;
    current.position = container->first;
    int result = 0;

    if (current.position > container->last)
        _invalid_parameter_noinfo();

    Iterator end;
    end.position = container->last;
    current.proxy = container->proxy;

    if (container->first > end.position)
        _invalid_parameter_noinfo();

    end.proxy = container->proxy;

    for (;;) {
        void (__cdecl* invalid)();

        if (current.proxy && current.proxy != end.proxy) {
            invalid = _invalid_parameter_noinfo;
        } else {
            invalid = _invalid_parameter_noinfo;
            invalid();
        }

        if (current.position == end.position)
            break;

        Container* owner;
        if (current.proxy == 0) {
            invalid();
            owner = 0;
        } else {
            owner = *current.proxy;
        }

        if (current.position >= owner->last)
            invalid();

        result += processItem(current.position, argument);

        if (current.proxy == 0) {
            invalid();
            owner = 0;
        } else {
            owner = *current.proxy;
        }

        if (current.position >= owner->last)
            invalid();

        ++current.position;
    }

    return result;
}
