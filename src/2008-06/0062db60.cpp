// from server: 77% by colin
// roc 2008-06 0062db60  unit: RBX::VGeometryService::?$FactoryProduct  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062db60
//
// 0062db60  53                   push ebx
// 0062db61  8bd9                 mov ebx, ecx
// 0062db63  8b8330010000         mov eax, dword ptr [ebx + 0x130]
// 0062db69  85c0                 test eax, eax
// 0062db6b  7470                 je 0x62dbdd
// 0062db6d  8b80e4020000         mov eax, dword ptr [eax + 0x2e4]
// 0062db73  56                   push esi
// 0062db74  8bb084000000         mov esi, dword ptr [eax + 0x84]
// 0062db7a  57                   push edi
// 0062db7b  6a00                 push 0
// 0062db7d  8dbb34010000         lea edi, [ebx + 0x134]
// 0062db83  6a00                 push 0
// 0062db85  8bcf                 mov ecx, edi
// 0062db87  e8e4bef6ff           call 0x599a70
// 0062db8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062db90  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062db94  57                   push edi
// 0062db95  51                   push ecx
// 0062db96  52                   push edx
// 0062db97  8bce                 mov ecx, esi
// 0062db99  e8a2f5fdff           call 0x60d140
// 0062db9e  33f6                 xor esi, esi
// 0062dba0  39b338010000         cmp dword ptr [ebx + 0x138], esi
// 0062dba6  7e33                 jle 0x62dbdb
// 0062dba8  55                   push ebp
// 0062dba9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0062dbad  8d4900               lea ecx, [ecx]
// 0062dbb0  8b07                 mov eax, dword ptr [edi]
// 0062dbb2  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0062dbb5  8d04b0               lea eax, [eax + esi*4]
// 0062dbb8  51                   push ecx
// 0062dbb9  e8c2c3f6ff           call 0x599f80
// 0062dbbe  83c404               add esp, 4
// 0062dbc1  8d542418             lea edx, [esp + 0x18]
// 0062dbc5  52                   push edx
// 0062dbc6  8bcd                 mov ecx, ebp
// 0062dbc8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0062dbcc  e81fffffff           call 0x62daf0
// 0062dbd1  46                   inc esi
// 0062dbd2  3bb338010000         cmp esi, dword ptr [ebx + 0x138]
// 0062dbd8  7cd6                 jl 0x62dbb0
// 0062dbda  5d                   pop ebp
// 0062dbdb  5f                   pop edi
// 0062dbdc  5e                   pop esi
// 0062dbdd  5b                   pop ebx
// 0062dbde  c20c00               ret 0xc

struct PartInstance;

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

struct FactoryProduct
{
    void f(int, int, int);
};

struct Inner
{
    void method(int, int);
};

struct Other
{
    void method(int*);
};

void FactoryProduct::f(int a, int b, int c)
{
    if (*(int*)((char*)this + 0x130) != 0)
    {
        char* p = *(char**)(*(int*)((char*)this + 0x130) + 0x2e4);
        PartInstance* pi = *(PartInstance**)(p + 0x84);
        Inner* inner = (Inner*)((char*)this + 0x134);
        inner->method(0, 0);
        ((Other*)pi)->method((int*)inner);
        int i = 0;
        if (*(int*)((char*)this + 0x138) > 0)
        {
            do
            {
                int* arr = *(int**)((char*)this + 0x134);
                PartInstance* item = GetSetImpl::get((PartInstance*)arr[i]);
                ((Other*)pi)->method((int*)&item);
                i++;
            } while (i < *(int*)((char*)this + 0x138));
        }
    }
}
