// from server: 98% by coldek
// roc 2008-06 005ffa10  unit: RBX::Tool  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ffa10
//
// 005ffa10  6aff                 push -1
// 005ffa12  68b05e7d00           push 0x7d5eb0
// 005ffa17  64a100000000         mov eax, dword ptr fs:[0]
// 005ffa1d  50                   push eax
// 005ffa1e  64892500000000       mov dword ptr fs:[0], esp
// 005ffa25  51                   push ecx
// 005ffa26  53                   push ebx
// 005ffa27  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ffa2b  55                   push ebp
// 005ffa2c  56                   push esi
// 005ffa2d  8bf1                 mov esi, ecx
// 005ffa2f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005ffa32  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 005ffa38  57                   push edi
// 005ffa39  51                   push ecx
// 005ffa3a  89442414             mov dword ptr [esp + 0x14], eax
// 005ffa3e  e88d9ee8ff           call 0x4898d0
// 005ffa43  8b5308               mov edx, dword ptr [ebx + 8]
// 005ffa46  52                   push edx
// 005ffa47  8bf8                 mov edi, eax
// 005ffa49  e8829ee8ff           call 0x4898d0
// 005ffa4e  83c408               add esp, 8
// 005ffa51  8be8                 mov ebp, eax
// 005ffa53  85ff                 test edi, edi
// 005ffa55  0f8496000000         je 0x5ffaf1
// 005ffa5b  6a01                 push 1
// 005ffa5d  57                   push edi
// 005ffa5e  e84d64e9ff           call 0x495eb0
// 005ffa63  83c408               add esp, 8
// 005ffa66  84c0                 test al, al
// 005ffa68  740c                 je 0x5ffa76
// 005ffa6a  57                   push edi
// 005ffa6b  6a00                 push 0
// 005ffa6d  8bce                 mov ecx, esi
// 005ffa6f  e88cfeffff           call 0x5ff900
// 005ffa74  eb7b                 jmp 0x5ffaf1
// 005ffa76  83bec401000006       cmp dword ptr [esi + 0x1c4], 6
// 005ffa7d  7523                 jne 0x5ffaa2
// 005ffa7f  8d4614               lea eax, [esi + 0x14]
// 005ffa82  50                   push eax
// 005ffa83  b9d4b69700           mov ecx, 0x97b6d4
// 005ffa88  e893bbf6ff           call 0x56b620
// 005ffa8d  33ff                 xor edi, edi
// 005ffa8f  3bc7                 cmp eax, edi
// 005ffa91  7411                 je 0x5ffaa4
// 005ffa93  8d4c2424             lea ecx, [esp + 0x24]
// 005ffa97  51                   push ecx
// 005ffa98  8d4810               lea ecx, [eax + 0x10]
// 005ffa9b  e8b05eebff           call 0x4b5950
// 005ffaa0  eb02                 jmp 0x5ffaa4
// 005ffaa2  33ff                 xor edi, edi
// 005ffaa4  83bec401000005       cmp dword ptr [esi + 0x1c4], 5
// 005ffaab  7c3e                 jl 0x5ffaeb
// 005ffaad  8d4614               lea eax, [esi + 0x14]
// 005ffab0  50                   push eax
// 005ffab1  b908b79700           mov ecx, 0x97b708
// 005ffab6  e865bbf6ff           call 0x56b620
// 005ffabb  3bc7                 cmp eax, edi
// 005ffabd  740d                 je 0x5ffacc
// 005ffabf  8d542424             lea edx, [esp + 0x24]
// 005ffac3  52                   push edx
// 005ffac4  8d4810               lea ecx, [eax + 0x10]
// 005ffac7  e8845eebff           call 0x4b5950
// 005ffacc  39be00020000         cmp dword ptr [esi + 0x200], edi
// 005ffad2  7417                 je 0x5ffaeb
// 005ffad4  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 005ffada  89be00020000         mov dword ptr [esi + 0x200], edi
// 005ffae0  e84b2cfaff           call 0x5a2730
// 005ffae5  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 005ffaeb  89bec4010000         mov dword ptr [esi + 0x1c4], edi
// 005ffaf1  53                   push ebx
// 005ffaf2  8bce                 mov ecx, esi
// 005ffaf4  e8c7b1f5ff           call 0x55acc0
// 005ffaf9  85ed                 test ebp, ebp
// 005ffafb  7457                 je 0x5ffb54
// 005ffafd  6a01                 push 1
// 005ffaff  55                   push ebp
// 005ffb00  e8ab63e9ff           call 0x495eb0
// 005ffb05  83c408               add esp, 8
// 005ffb08  84c0                 test al, al
// 005ffb0a  741c                 je 0x5ffb28
// 005ffb0c  8bce                 mov ecx, esi
// 005ffb0e  e85de0ffff           call 0x5fdb70
// 005ffb13  5f                   pop edi
// 005ffb14  5e                   pop esi
// 005ffb15  5d                   pop ebp
// 005ffb16  5b                   pop ebx
// 005ffb17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ffb1b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ffb22  83c410               add esp, 0x10
// 005ffb25  c20400               ret 4
// 005ffb28  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 005ffb2e  56                   push esi
// 005ffb2f  e86cb1e9ff           call 0x49aca0
// 005ffb34  83c404               add esp, 4
// 005ffb37  3bf8                 cmp edi, eax
// 005ffb39  7519                 jne 0x5ffb54
// 005ffb3b  837c241005           cmp dword ptr [esp + 0x10], 5
// 005ffb40  7c09                 jl 0x5ffb4b
// 005ffb42  6a04                 push 4
// 005ffb44  8bce                 mov ecx, esi
// 005ffb46  e805fcffff           call 0x5ff750
// 005ffb4b  6a05                 push 5
// 005ffb4d  8bce                 mov ecx, esi
// 005ffb4f  e8fcfbffff           call 0x5ff750
// 005ffb54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ffb58  5f                   pop edi
// 005ffb59  5e                   pop esi
// 005ffb5a  5d                   pop ebp
// 005ffb5b  5b                   pop ebx
// 005ffb5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ffb63  83c410               add esp, 0x10
// 005ffb66  c20400               ret 4

// roc 2008-06 005ffa10  unit: RBX::Tool  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ffa10
//
// 005ffa10  6aff                 push -1
// 005ffa12  68b05e7d00           push 0x7d5eb0
// 005ffa17  64a100000000         mov eax, dword ptr fs:[0]
// 005ffa1d  50                   push eax
// 005ffa1e  64892500000000       mov dword ptr fs:[0], esp
// 005ffa25  51                   push ecx
// 005ffa26  53                   push ebx
// 005ffa27  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ffa2b  55                   push ebp
// 005ffa2c  56                   push esi
// 005ffa2d  8bf1                 mov esi, ecx
// 005ffa2f  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005ffa32  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 005ffa38  57                   push edi
// 005ffa39  51                   push ecx
// 005ffa3a  89442414             mov dword ptr [esp + 0x14], eax
// 005ffa3e  e88d9ee8ff           call 0x4898d0
// 005ffa43  8b5308               mov edx, dword ptr [ebx + 8]
// 005ffa46  52                   push edx
// 005ffa47  8bf8                 mov edi, eax
// 005ffa49  e8829ee8ff           call 0x4898d0
// 005ffa4e  83c408               add esp, 8
// 005ffa51  8be8                 mov ebp, eax
// 005ffa53  85ff                 test edi, edi
// 005ffa55  0f8496000000         je 0x5ffaf1
// 005ffa5b  6a01                 push 1
// 005ffa5d  57                   push edi
// 005ffa5e  e84d64e9ff           call 0x495eb0
// 005ffa63  83c408               add esp, 8
// 005ffa66  84c0                 test al, al
// 005ffa68  740c                 je 0x5ffa76
// 005ffa6a  57                   push edi
// 005ffa6b  6a00                 push 0
// 005ffa6d  8bce                 mov ecx, esi
// 005ffa6f  e88cfeffff           call 0x5ff900
// 005ffa74  eb7b                 jmp 0x5ffaf1
// 005ffa76  83bec401000006       cmp dword ptr [esi + 0x1c4], 6
// 005ffa7d  7523                 jne 0x5ffaa2
// 005ffa7f  8d4614               lea eax, [esi + 0x14]
// 005ffa82  50                   push eax
// 005ffa83  b9d4b69700           mov ecx, 0x97b6d4
// 005ffa88  e893bbf6ff           call 0x56b620
// 005ffa8d  33ff                 xor edi, edi
// 005ffa8f  3bc7                 cmp eax, edi
// 005ffa91  7411                 je 0x5ffaa4
// 005ffa93  8d4c2424             lea ecx, [esp + 0x24]
// 005ffa97  51                   push ecx
// 005ffa98  8d4810               lea ecx, [eax + 0x10]
// 005ffa9b  e8b05eebff           call 0x4b5950
// 005ffaa0  eb02                 jmp 0x5ffaa4
// 005ffaa2  33ff                 xor edi, edi
// 005ffaa4  83bec401000005       cmp dword ptr [esi + 0x1c4], 5
// 005ffaab  7c3e                 jl 0x5ffaeb
// 005ffaad  8d4614               lea eax, [esi + 0x14]
// 005ffab0  50                   push eax
// 005ffab1  b908b79700           mov ecx, 0x97b708
// 005ffab6  e865bbf6ff           call 0x56b620
// 005ffabb  3bc7                 cmp eax, edi
// 005ffabd  740d                 je 0x5ffacc
// 005ffabf  8d542424             lea edx, [esp + 0x24]
// 005ffac3  52                   push edx
// 005ffac4  8d4810               lea ecx, [eax + 0x10]
// 005ffac7  e8845eebff           call 0x4b5950
// 005ffacc  39be00020000         cmp dword ptr [esi + 0x200], edi
// 005ffad2  7417                 je 0x5ffaeb
// 005ffad4  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 005ffada  89be00020000         mov dword ptr [esi + 0x200], edi
// 005ffae0  e84b2cfaff           call 0x5a2730
// 005ffae5  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 005ffaeb  89bec4010000         mov dword ptr [esi + 0x1c4], edi
// 005ffaf1  53                   push ebx
// 005ffaf2  8bce                 mov ecx, esi
// 005ffaf4  e8c7b1f5ff           call 0x55acc0
// 005ffaf9  85ed                 test ebp, ebp
// 005ffafb  7457                 je 0x5ffb54
// 005ffafd  6a01                 push 1
// 005ffaff  55                   push ebp
// 005ffb00  e8ab63e9ff           call 0x495eb0
// 005ffb05  83c408               add esp, 8
// 005ffb08  84c0                 test al, al
// 005ffb0a  741c                 je 0x5ffb28
// 005ffb0c  8bce                 mov ecx, esi
// 005ffb0e  e85de0ffff           call 0x5fdb70
// 005ffb13  5f                   pop edi
// 005ffb14  5e                   pop esi
// 005ffb15  5d                   pop ebp
// 005ffb16  5b                   pop ebx
// 005ffb17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ffb1b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ffb22  83c410               add esp, 0x10
// 005ffb25  c20400               ret 4
// 005ffb28  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 005ffb2e  56                   push esi
// 005ffb2f  e86cb1e9ff           call 0x49aca0
// 005ffb34  83c404               add esp, 4
// 005ffb37  3bf8                 cmp edi, eax
// 005ffb39  7519                 jne 0x5ffb54
// 005ffb3b  837c241005           cmp dword ptr [esp + 0x10], 5
// 005ffb40  7c09                 jl 0x5ffb4b
// 005ffb42  6a04                 push 4
// 005ffb44  8bce                 mov ecx, esi
// 005ffb46  e805fcffff           call 0x5ff750
// 005ffb4b  6a05                 push 5
// 005ffb4d  8bce                 mov ecx, esi
// 005ffb4f  e8fcfbffff           call 0x5ff750
// 005ffb54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ffb58  5f                   pop edi
// 005ffb59  5e                   pop esi
// 005ffb5a  5d                   pop ebp
// 005ffb5b  5b                   pop ebx
// 005ffb5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ffb63  83c410               add esp, 0x10
// 005ffb66  c20400               ret 4
#include <intrin.h>

extern "C" int __cdecl sub_4898d0(int);
extern "C" bool __cdecl sub_495eb0(int, int);
extern "C" void* __cdecl sub_49aca0(void*);

struct Event
{
    int reserved;
    int oldValue;
    int newValue;
};

struct EventArgument
{
    Event* const value;
    ~EventArgument();
};

inline EventArgument::~EventArgument()
{
}

struct Guard { Guard(); ~Guard(); void f(); };
struct Signal
{
    void sub_4b5950(const EventArgument*);
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Registry
{
    Entry* sub_56b620(void*);
};

extern Registry registry_97b6d4;
extern Registry registry_97b708;

struct Connection
{
    void sub_5a2730();
};

struct S
{
    char padding0[0x104];
    void* parent;
    char padding1[0xA4];
    Connection* connection;
    char padding2[0x14];
    int state;
    char padding3[0x38];
    int active;

    void sub_5ff900(int, int);
    void sub_55acc0(Event*);
    void sub_5fdb70();
    void sub_5ff750(int);
    void sub_5ffa10(EventArgument);
};

void S::sub_5ffa10(EventArgument argument)
{
    if (false) { Guard g; g.f(); }
    Event* event = argument.value;
    _ReadWriteBarrier();
    int previousState = state;
    int oldObject = sub_4898d0(event->oldValue);
    int newObject = sub_4898d0(event->newValue);

    if (oldObject)
    {
        if (sub_495eb0(oldObject, 1))
        {
            sub_5ff900(0, oldObject);
        }
        else
        {
            if (state == 6)
            {
                Entry* entry = registry_97b6d4.sub_56b620(
                    reinterpret_cast<char*>(this) + 0x14);
                if (entry)
                    entry->signal.sub_4b5950(&argument);
            }

            if (state >= 5)
            {
                Entry* entry = registry_97b708.sub_56b620(
                    reinterpret_cast<char*>(this) + 0x14);
                if (entry)
                    entry->signal.sub_4b5950(&argument);

                if (active)
                {
                    active = 0;
                    connection->sub_5a2730();
                    connection = 0;
                }
            }

            state = 0;
        }
    }

    sub_55acc0(event);

    if (newObject)
    {
        if (sub_495eb0(newObject, 1))
        {
            sub_5fdb70();
            return;
        }

        void* savedParent = parent;
        if (savedParent == sub_49aca0(this))
        {
            if (previousState >= 5)
                sub_5ff750(4);
            sub_5ff750(5);
        }
    }
}
