// from server: 59% by colin
// roc 2007-08 00570940  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570940
//
// 00570940  51                   push ecx
// 00570941  53                   push ebx
// 00570942  55                   push ebp
// 00570943  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00570949  56                   push esi
// 0057094a  57                   push edi
// 0057094b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057094f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00570953  8b7704               mov esi, dword ptr [edi + 4]
// 00570956  3b7708               cmp esi, dword ptr [edi + 8]
// 00570959  7605                 jbe 0x570960
// 0057095b  ffd5                 call ebp
// 0057095d  8d4900               lea ecx, [ecx]
// 00570960  8b5f08               mov ebx, dword ptr [edi + 8]
// 00570963  395f04               cmp dword ptr [edi + 4], ebx
// 00570966  7602                 jbe 0x57096a
// 00570968  ffd5                 call ebp
// 0057096a  3bf3                 cmp esi, ebx
// 0057096c  741f                 je 0x57098d
// 0057096e  3b7708               cmp esi, dword ptr [edi + 8]
// 00570971  7202                 jb 0x570975
// 00570973  ffd5                 call ebp
// 00570975  8b06                 mov eax, dword ptr [esi]
// 00570977  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057097b  50                   push eax
// 0057097c  e86ff9ffff           call 0x5702f0
// 00570981  3b7708               cmp esi, dword ptr [edi + 8]
// 00570984  7202                 jb 0x570988
// 00570986  ffd5                 call ebp
// 00570988  83c604               add esi, 4
// 0057098b  ebd3                 jmp 0x570960
// 0057098d  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00570990  85ff                 test edi, edi
// 00570992  75bf                 jne 0x570953
// 00570994  5f                   pop edi
// 00570995  5e                   pop esi
// 00570996  5d                   pop ebp
// 00570997  5b                   pop ebx
// 00570998  59                   pop ecx
// 00570999  c20400               ret 4

struct EventArguments {
    int* begin;
    int* end;
    int* capacity;
    char pad[0x14];
    void* extra;
};

struct GenericSlotWrapper {
    void execute(const EventArguments& arguments);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void GenericSlotWrapper::execute(const EventArguments& arguments)
{
    int* it = arguments.end;
    int* end = arguments.capacity;
    while (it != end) {
        if (it > arguments.capacity) {
            _invalid_parameter_noinfo();
        }
        int* cur = arguments.capacity;
        if (arguments.end > cur) {
            _invalid_parameter_noinfo();
        }
        if (it == cur) {
            break;
        }
        if (it >= arguments.capacity) {
            _invalid_parameter_noinfo();
        }
        int val = *it;
        this->execute(*(const EventArguments*)val);
        if (it >= arguments.capacity) {
            _invalid_parameter_noinfo();
        }
        ++it;
    }
    EventArguments* next = (EventArguments*)arguments.extra;
    if (next != 0) {
        this->execute(*next);
    }
}
