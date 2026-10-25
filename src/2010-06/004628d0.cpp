// from server: 97% by atomic.potato
// roc 2010-06 004628d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004628d0
//
// 004628d0  56                   push esi
// 004628d1  8bf1                 mov esi, ecx
// 004628d3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004628d6  40                   inc eax
// 004628d7  57                   push edi
// 004628d8  394614               cmp dword ptr [esi + 0x14], eax
// 004628db  7707                 ja 0x4628e4
// 004628dd  6a01                 push 1
// 004628df  e86c8ffbff           call 0x41b850
// 004628e4  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004628e7  037e1c               add edi, dword ptr [esi + 0x1c]
// 004628ea  8b4614               mov eax, dword ptr [esi + 0x14]
// 004628ed  3bc7                 cmp eax, edi
// 004628ef  7702                 ja 0x4628f3
// 004628f1  2bf8                 sub edi, eax
// 004628f3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004628f6  833cb900             cmp dword ptr [ecx + edi*4], 0
// 004628fa  7510                 jne 0x46290c
// 004628fc  6a0c                 push 0xc
// 004628fe  e89d503400           call 0x7a79a0
// 00462903  8b5610               mov edx, dword ptr [esi + 0x10]
// 00462906  83c404               add esp, 4
// 00462909  8904ba               mov dword ptr [edx + edi*4], eax
// 0046290c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0046290f  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 00462912  85ff                 test edi, edi
// 00462914  7424                 je 0x46293a
// 00462916  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046291a  8b11                 mov edx, dword ptr [ecx]
// 0046291c  8917                 mov dword ptr [edi], edx
// 0046291e  8b4104               mov eax, dword ptr [ecx + 4]
// 00462921  894704               mov dword ptr [edi + 4], eax
// 00462924  85c0                 test eax, eax
// 00462926  740c                 je 0x462934
// 00462928  83c004               add eax, 4
// 0046292b  ba01000000           mov edx, 1
// 00462930  f00fc110             lock xadd dword ptr [eax], edx
// 00462934  8a4108               mov al, byte ptr [ecx + 8]
// 00462937  884708               mov byte ptr [edi + 8], al
// 0046293a  ff461c               inc dword ptr [esi + 0x1c]
// 0046293d  5f                   pop edi
// 0046293e  5e                   pop esi
// 0046293f  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_41B850(int);
extern "C" void* __cdecl sub_7A79A0(unsigned int);

struct Inner {
    int a;
    long ref;
    char b;
};

struct Outer {
    char pad0[0x10];
    Inner** items;
    int capacity;
    int count;
    int index;
    void insert(Inner* value);
};

void Outer::insert(Inner* value)
{
    int idx = index + 1;
    if (capacity <= (unsigned)idx)
        sub_41B850(1);

    int pos = count + index;
    if ((unsigned)capacity <= (unsigned)pos)
        pos -= capacity;

    if (items[pos] == 0)
        items[pos] = (Inner*)sub_7A79A0(0xc);

    Inner* slot = items[pos];
    if (slot != 0)
    {
        slot->a = value->a;
        slot->ref = value->ref;
        if (slot->ref != 0)
            _InterlockedExchangeAdd((volatile long*)(slot->ref + 4), 1);
        slot->b = value->b;
    }
    index++;
}
