// from server: 51% by colin
// roc 2008-06 004b47b0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 556 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b47b0
//
// 004b47b0  55                   push ebp
// 004b47b1  8bec                 mov ebp, esp
// 004b47b3  6aff                 push -1
// 004b47b5  68c1887c00           push 0x7c88c1
// 004b47ba  64a100000000         mov eax, dword ptr fs:[0]
// 004b47c0  50                   push eax
// 004b47c1  64892500000000       mov dword ptr fs:[0], esp
// 004b47c8  83ec40               sub esp, 0x40
// 004b47cb  53                   push ebx
// 004b47cc  56                   push esi
// 004b47cd  8bf1                 mov esi, ecx
// 004b47cf  8b4608               mov eax, dword ptr [esi + 8]
// 004b47d2  57                   push edi
// 004b47d3  8d4dec               lea ecx, [ebp - 0x14]
// 004b47d6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b47d9  51                   push ecx
// 004b47da  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b47dd  81c1b02c0000         add ecx, 0x2cb0
// 004b47e3  8975e8               mov dword ptr [ebp - 0x18], esi
// 004b47e6  8945ec               mov dword ptr [ebp - 0x14], eax
// 004b47e9  e872571300           call 0x5e9f60
// 004b47ee  85c0                 test eax, eax
// 004b47f0  747a                 je 0x4b486c
// 004b47f2  837e0800             cmp dword ptr [esi + 8], 0
// 004b47f6  0f8583000000         jne 0x4b487f
// 004b47fc  8d55e4               lea edx, [ebp - 0x1c]
// 004b47ff  52                   push edx
// 004b4800  e81b4e0b00           call 0x569620
// 004b4805  83c404               add esp, 4
// 004b4808  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b480b  8b38                 mov edi, dword ptr [eax]
// 004b480d  6a01                 push 1
// 004b480f  81c1542d0000         add ecx, 0x2d54
// 004b4815  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b481c  e88f50ffff           call 0x4a98b0
// 004b4821  50                   push eax
// 004b4822  68244d8200           push 0x824d24
// 004b4827  6a03                 push 3
// 004b4829  57                   push edi
// 004b482a  e8714b0b00           call 0x5693a0
// 004b482f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004b4832  83c410               add esp, 0x10
// 004b4835  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004b483c  85c0                 test eax, eax
// 004b483e  742c                 je 0x4b486c
// 004b4840  8bf0                 mov esi, eax
// 004b4842  83c004               add eax, 4
// 004b4845  83c9ff               or ecx, 0xffffffff
// 004b4848  f00fc108             lock xadd dword ptr [eax], ecx
// 004b484c  751e                 jne 0x4b486c
// 004b484e  8b16                 mov edx, dword ptr [esi]
// 004b4850  8b4204               mov eax, dword ptr [edx + 4]
// 004b4853  8bce                 mov ecx, esi
// 004b4855  ffd0                 call eax
// 004b4857  8d4e08               lea ecx, [esi + 8]
// 004b485a  83caff               or edx, 0xffffffff
// 004b485d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4861  7509                 jne 0x4b486c
// 004b4863  8b06                 mov eax, dword ptr [esi]
// 004b4865  8b5008               mov edx, dword ptr [eax + 8]
// 004b4868  8bce                 mov ecx, esi
// 004b486a  ffd2                 call edx
// 004b486c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b486f  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4876  5f                   pop edi
// 004b4877  5e                   pop esi
// 004b4878  5b                   pop ebx
// 004b4879  8be5                 mov esp, ebp
// 004b487b  5d                   pop ebp
// 004b487c  c20400               ret 4
// 004b487f  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b4882  6a01                 push 1
// 004b4884  57                   push edi
// 004b4885  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004b488c  e83f6dffff           call 0x4ab5d0
// 004b4891  8b4608               mov eax, dword ptr [esi + 8]
// 004b4894  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b4897  83c408               add esp, 8
// 004b489a  50                   push eax
// 004b489b  57                   push edi
// 004b489c  e83f42ffff           call 0x4a8ae0
// 004b48a1  e8ea9ffeff           call 0x49e890
// 004b48a6  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004b48ad  74bd                 je 0x4b486c
// 004b48af  8b7e08               mov edi, dword ptr [esi + 8]
// 004b48b2  8bcf                 mov ecx, edi
// 004b48b4  8d5f10               lea ebx, [edi + 0x10]
// 004b48b7  e8e472feff           call 0x49bba0
// 004b48bc  6a04                 push 4
// 004b48be  8d45b4               lea eax, [ebp - 0x4c]
// 004b48c1  50                   push eax
// 004b48c2  8d4f08               lea ecx, [edi + 8]
// 004b48c5  e80665ffff           call 0x4aadd0
// 004b48ca  8bf8                 mov edi, eax
// 004b48cc  8d4dd8               lea ecx, [ebp - 0x28]
// 004b48cf  51                   push ecx
// 004b48d0  c645fc02             mov byte ptr [ebp - 4], 2
// 004b48d4  e8474d0b00           call 0x569620
// 004b48d9  83c404               add esp, 4
// 004b48dc  8945ec               mov dword ptr [ebp - 0x14], eax
// 004b48df  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004b48e3  c645fc03             mov byte ptr [ebp - 4], 3
// 004b48e7  7208                 jb 0x4b48f1
// 004b48e9  8b5704               mov edx, dword ptr [edi + 4]
// 004b48ec  895508               mov dword ptr [ebp + 8], edx
// 004b48ef  eb06                 jmp 0x4b48f7
// 004b48f1  83c704               add edi, 4
// 004b48f4  897d08               mov dword ptr [ebp + 8], edi
// 004b48f7  8b03                 mov eax, dword ptr [ebx]
// 004b48f9  8b5004               mov edx, dword ptr [eax + 4]
// 004b48fc  8bcb                 mov ecx, ebx
// 004b48fe  ffd2                 call edx
// 004b4900  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 004b4904  7205                 jb 0x4b490b
// 004b4906  8b5808               mov ebx, dword ptr [eax + 8]
// 004b4909  eb03                 jmp 0x4b490e
// 004b490b  8d5808               lea ebx, [eax + 8]
// 004b490e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b4911  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004b4914  8b38                 mov edi, dword ptr [eax]
// 004b4916  6a01                 push 1
// 004b4918  81c1542d0000         add ecx, 0x2d54
// 004b491e  e88d4fffff           call 0x4a98b0
// 004b4923  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b4926  50                   push eax
// 004b4927  51                   push ecx
// 004b4928  53                   push ebx
// 004b4929  68084d8200           push 0x824d08
// 004b492e  6a01                 push 1
// 004b4930  57                   push edi
// 004b4931  e86a4a0b00           call 0x5693a0
// 004b4936  83c418               add esp, 0x18
// 004b4939  8d4dd8               lea ecx, [ebp - 0x28]
// 004b493c  c645fc02             mov byte ptr [ebp - 4], 2
// 004b4940  e81bbd1400           call 0x600660
// 004b4945  8d4db4               lea ecx, [ebp - 0x4c]
// 004b4948  c645fc01             mov byte ptr [ebp - 4], 1
// 004b494c  ff1568248000         call dword ptr [0x802468]
// 004b4952  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b4955  5f                   pop edi
// 004b4956  5e                   pop esi
// 004b4957  64890d00000000       mov dword ptr fs:[0], ecx
// 004b495e  5b                   pop ebx
// 004b495f  8be5                 mov esp, ebp
// 004b4961  5d                   pop ebp
// 004b4962  c20400               ret 4
// 004b4965  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004b4968  8b4308               mov eax, dword ptr [ebx + 8]
// 004b496b  8d55d0               lea edx, [ebp - 0x30]
// 004b496e  52                   push edx
// 004b496f  8d7010               lea esi, [eax + 0x10]
// 004b4972  e8a94c0b00           call 0x569620
// 004b4977  83c404               add esp, 4
// 004b497a  894508               mov dword ptr [ebp + 8], eax
// 004b497d  8b06                 mov eax, dword ptr [esi]
// 004b497f  8b5004               mov edx, dword ptr [eax + 4]
// 004b4982  8bce                 mov ecx, esi
// 004b4984  c645fc05             mov byte ptr [ebp - 4], 5
// 004b4988  ffd2                 call edx
// 004b498a  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 004b498e  7205                 jb 0x4b4995
// 004b4990  8b7808               mov edi, dword ptr [eax + 8]
// 004b4993  eb03                 jmp 0x4b4998
// 004b4995  8d7808               lea edi, [eax + 8]
// 004b4998  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004b499b  8b4508               mov eax, dword ptr [ebp + 8]
// 004b499e  8b11                 mov edx, dword ptr [ecx]
// 004b49a0  8b30                 mov esi, dword ptr [eax]
// 004b49a2  8b4204               mov eax, dword ptr [edx + 4]
// 004b49a5  ffd0                 call eax
// 004b49a7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004b49aa  50                   push eax
// 004b49ab  6a01                 push 1
// 004b49ad  81c1542d0000         add ecx, 0x2d54
// 004b49b3  e8f84effff           call 0x4a98b0
// 004b49b8  50                   push eax
// 004b49b9  57                   push edi
// 004b49ba  68ec4c8200           push 0x824cec
// 004b49bf  6a03                 push 3
// 004b49c1  56                   push esi
// 004b49c2  e8d9490b00           call 0x5693a0
// 004b49c7  83c418               add esp, 0x18
// 004b49ca  8d4dd0               lea ecx, [ebp - 0x30]
// 004b49cd  c645fc04             mov byte ptr [ebp - 4], 4
// 004b49d1  e88abc1400           call 0x600660
// 004b49d6  b86c484b00           mov eax, 0x4b486c
// 004b49db  c3                   ret 

// from server: 77% by colin
// from server: 71% by king_originala
// roc 2008-06 004b47b0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b47b0
//
// 004b47b0  55                   push ebp
// 004b47b1  8bec                 mov ebp, esp
// 004b47b3  6aff                 push -1
// 004b47b5  68c1887c00           push 0x7c88c1
// 004b47ba  64a100000000         mov eax, dword ptr fs:[0]
// 004b47c0  50                   push eax
// 004b47c1  64892500000000       mov dword ptr fs:[0], esp
// 004b47c8  83ec40               sub esp, 0x40
// 004b47cb  53                   push ebx
// 004b47cc  56                   push esi
// 004b47cd  8bf1                 mov esi, ecx
// 004b47cf  8b4608               mov eax, dword ptr [esi + 8]
// 004b47d2  57                   push edi
// 004b47d3  8d4dec               lea ecx, [ebp - 0x14]
// 004b47d6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b47d9  51                   push ecx
// 004b47da  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b47dd  81c1b02c0000         add ecx, 0x2cb0
// 004b47e3  8975e8               mov dword ptr [ebp - 0x18], esi
// 004b47e6  8945ec               mov dword ptr [ebp - 0x14], eax
// 004b47e9  e872571300           call 0x5e9f60
// 004b47ee  85c0                 test eax, eax
// 004b47f0  747a                 je 0x4b486c
// 004b47f2  837e0800             cmp dword ptr [esi + 8], 0
// 004b47f6  0f8583000000         jne 0x4b487f
// 004b47fc  8d55e4               lea edx, [ebp - 0x1c]
// 004b47ff  52                   push edx
// 004b4800  e81b4e0b00           call 0x569620
// 004b4805  83c404               add esp, 4
// 004b4808  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b480b  8b38                 mov edi, dword ptr [eax]
// 004b480d  6a01                 push 1
// 004b480f  81c1542d0000         add ecx, 0x2d54
// 004b4815  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b481c  e88f50ffff           call 0x4a98b0
// 004b4821  50                   push eax
// 004b4822  68244d8200           push 0x824d24
// 004b4827  6a03                 push 3
// 004b4829  57                   push edi
// 004b482a  e8714b0b00           call 0x5693a0
// 004b482f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004b4832  83c410               add esp, 0x10
// 004b4835  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004b483c  85c0                 test eax, eax
// 004b483e  742c                 je 0x4b486c
// 004b4840  8bf0                 mov esi, eax
// 004b4842  83c004               add eax, 4
// 004b4845  83c9ff               or ecx, 0xffffffff
// 004b4848  f00fc108             lock xadd dword ptr [eax], ecx
// 004b484c  751e                 jne 0x4b486c
// 004b484e  8b16                 mov edx, dword ptr [esi]
// 004b4850  8b4204               mov eax, dword ptr [edx + 4]
// 004b4853  8bce                 mov ecx, esi
// 004b4855  ffd0                 call eax
// 004b4857  8d4e08               lea ecx, [esi + 8]
// 004b485a  83caff               or edx, 0xffffffff
// 004b485d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4861  7509                 jne 0x4b486c
// 004b4863  8b06                 mov eax, dword ptr [esi]
// 004b4865  8b5008               mov edx, dword ptr [eax + 8]
// 004b4868  8bce                 mov ecx, esi
// 004b486a  ffd2                 call edx

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Logger;

struct LoggerReference {
    Logger* pointer;
    Control* control;

    __forceinline ~LoggerReference()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

extern LoggerReference __cdecl getLogger();
extern void __cdecl logMessage(Logger*, int, const char*, const char*);

struct Table {
    int contains(const unsigned int*);
};

struct Name {
    const char* text(int);
};

struct Owner {
    unsigned char padding[0x2cb0];
    Table table;
    unsigned char gap[0xa3];
    Name name;
};

struct Item {
    void* vtable;
    Owner* owner;
    unsigned int identifier;
    void process();
};

#pragma optimize("y", off)

void Item::process()
{
    try {
        unsigned int key = identifier;
        if (owner->table.contains(&key)) {
            if (identifier == 0) {
                LoggerReference logger = getLogger();
                Logger* pointer = logger.pointer;
                logMessage(pointer, 3, "Replication: ~NULL >> %s",
                           owner->name.text(1));
            }
        }
    }
    catch (...) {
    }
}
