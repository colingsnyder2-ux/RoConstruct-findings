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
