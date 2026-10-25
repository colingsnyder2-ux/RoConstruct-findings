// from server: 100% by king_originala
// roc 2008-06 00552a60  unit: RBX::RenderBase::AggregateChunk  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552a60
//
// 00552a60  55                   push ebp
// 00552a61  8bec                 mov ebp, esp
// 00552a63  83ec34               sub esp, 0x34
// 00552a66  56                   push esi
// 00552a67  894dcc               mov dword ptr [ebp - 0x34], ecx
// 00552a6a  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00552a71  8d45f4               lea eax, [ebp - 0xc]
// 00552a74  50                   push eax
// 00552a75  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552a78  83c108               add ecx, 8
// 00552a7b  e8b0dbfeff           call 0x540630
// 00552a80  eb08                 jmp 0x552a8a
// 00552a82  8d4df4               lea ecx, [ebp - 0xc]
// 00552a85  e8d6e6feff           call 0x541160
// 00552a8a  8d4dd8               lea ecx, [ebp - 0x28]
// 00552a8d  51                   push ecx
// 00552a8e  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552a91  83c108               add ecx, 8
// 00552a94  e8c7dbfeff           call 0x540660
// 00552a99  50                   push eax
// 00552a9a  8d4df4               lea ecx, [ebp - 0xc]
// 00552a9d  e87ee4feff           call 0x540f20
// 00552aa2  0fb6d0               movzx edx, al
// 00552aa5  85d2                 test edx, edx
// 00552aa7  7411                 je 0x552aba
// 00552aa9  8d4df4               lea ecx, [ebp - 0xc]
// 00552aac  e80f38ffff           call 0x5462c0
// 00552ab1  c7402400000000       mov dword ptr [eax + 0x24], 0
// 00552ab8  ebc8                 jmp 0x552a82
// 00552aba  8d45ec               lea eax, [ebp - 0x14]
// 00552abd  50                   push eax
// 00552abe  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552ac1  83c108               add ecx, 8
// 00552ac4  e867dbfeff           call 0x540630
// 00552ac9  eb08                 jmp 0x552ad3
// 00552acb  8d4dec               lea ecx, [ebp - 0x14]
// 00552ace  e88de6feff           call 0x541160
// 00552ad3  8d4dd0               lea ecx, [ebp - 0x30]
// 00552ad6  51                   push ecx
// 00552ad7  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552ada  83c108               add ecx, 8
// 00552add  e87edbfeff           call 0x540660
// 00552ae2  50                   push eax
// 00552ae3  8d4dec               lea ecx, [ebp - 0x14]
// 00552ae6  e835e4feff           call 0x540f20
// 00552aeb  0fb6d0               movzx edx, al
// 00552aee  85d2                 test edx, edx
// 00552af0  0f84af000000         je 0x552ba5
// 00552af6  8d4dec               lea ecx, [ebp - 0x14]
// 00552af9  e882e6feff           call 0x541180
// 00552afe  8945e8               mov dword ptr [ebp - 0x18], eax
// 00552b01  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b04  83c10c               add ecx, 0xc
// 00552b07  e81438ffff           call 0x546320
// 00552b0c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b0f  394124               cmp dword ptr [ecx + 0x24], eax
// 00552b12  0f8388000000         jae 0x552ba0
// 00552b18  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00552b1b  8b4224               mov eax, dword ptr [edx + 0x24]
// 00552b1e  50                   push eax
// 00552b1f  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b22  83c10c               add ecx, 0xc
// 00552b25  e836030000           call 0x552e60
// 00552b2a  8b08                 mov ecx, dword ptr [eax]
// 00552b2c  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00552b2f  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00552b32  52                   push edx
// 00552b33  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552b36  e875feffff           call 0x5529b0
// 00552b3b  8945e0               mov dword ptr [ebp - 0x20], eax
// 00552b3e  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00552b41  3b45e8               cmp eax, dword ptr [ebp - 0x18]
// 00552b44  7446                 je 0x552b8c
// 00552b46  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b49  83c10c               add ecx, 0xc
// 00552b4c  e83f030000           call 0x552e90
// 00552b51  8bf0                 mov esi, eax
// 00552b53  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b56  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00552b59  52                   push edx
// 00552b5a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b5d  83c10c               add ecx, 0xc
// 00552b60  e8fb020000           call 0x552e60
// 00552b65  8b0e                 mov ecx, dword ptr [esi]
// 00552b67  8908                 mov dword ptr [eax], ecx
// 00552b69  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b6c  83c10c               add ecx, 0xc
// 00552b6f  e84c030000           call 0x552ec0
// 00552b74  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00552b77  52                   push edx
// 00552b78  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00552b7b  50                   push eax
// 00552b7c  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00552b7f  e85cfdffff           call 0x5528e0
// 00552b84  0345fc               add eax, dword ptr [ebp - 4]
// 00552b87  8945fc               mov dword ptr [ebp - 4], eax
// 00552b8a  eb0f                 jmp 0x552b9b
// 00552b8c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00552b8f  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00552b92  83c201               add edx, 1
// 00552b95  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00552b98  895024               mov dword ptr [eax + 0x24], edx
// 00552b9b  e961ffffff           jmp 0x552b01
// 00552ba0  e926ffffff           jmp 0x552acb
// 00552ba5  8b45fc               mov eax, dword ptr [ebp - 4]
// 00552ba8  5e                   pop esi
// 00552ba9  8be5                 mov esp, ebp
// 00552bab  5d                   pop ebp
// 00552bac  c3                   ret 

struct Bucket;
struct Item;

struct Iterator
{
    unsigned char state[8];
    bool func_00540f20(const Iterator &) const;
    Iterator &func_00541160();
    Bucket *func_005462c0() const;
    Bucket *func_00541180() const;
};

struct Collection
{
    Iterator func_00540630();
    Iterator func_00540660();
};

struct Items
{
    unsigned char state[24];
    unsigned int func_00546320() const;
    Item *&func_00552e60(unsigned int);
    Item *&func_00552e90();
    void func_00552ec0();
};

struct Bucket
{
    unsigned char padding[12];
    Items items;
    unsigned int cursor;
};

struct S
{
    unsigned char padding[8];
    Collection collection;
    Bucket *func_005529b0(Item *);
    int func_005528e0(Item *, Bucket *);
    int func_00552a60();
};

#pragma optimize("", off)
int S::func_00552a60()
{
    int total = 0;

    for (Iterator i = collection.func_00540630();
         i.func_00540f20(collection.func_00540660());
         i.func_00541160())
    {
        i.func_005462c0()->cursor = 0;
    }

    for (Iterator j = collection.func_00540630();
         j.func_00540f20(collection.func_00540660());
         j.func_00541160())
    {
        Bucket *bucket = j.func_00541180();

        while (bucket->cursor < bucket->items.func_00546320())
        {
            struct Locals
            {
                Bucket *destination;
                Item *item;
            } locals;

            locals.item = bucket->items.func_00552e60(bucket->cursor);
            locals.destination = func_005529b0(locals.item);

            if (locals.destination != bucket)
            {
                bucket->items.func_00552e60(bucket->cursor) =
                    bucket->items.func_00552e90();
                bucket->items.func_00552ec0();
                total += func_005528e0(locals.item, locals.destination);
            }
            else
            {
                bucket->cursor = bucket->cursor + 1;
            }
        }
    }

    return total;
}
#pragma optimize("", on)
