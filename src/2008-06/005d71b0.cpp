// from server: 100% by king_originala
// roc 2008-06 005d71b0  unit: RBX::VTimerService::?$FactoryProduct  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d71b0
//
// 005d71b0  6aff                 push -1
// 005d71b2  68d65c7d00           push 0x7d5cd6
// 005d71b7  64a100000000         mov eax, dword ptr fs:[0]
// 005d71bd  50                   push eax
// 005d71be  64892500000000       mov dword ptr fs:[0], esp
// 005d71c5  51                   push ecx
// 005d71c6  56                   push esi
// 005d71c7  8bf1                 mov esi, ecx
// 005d71c9  89742404             mov dword ptr [esp + 4], esi
// 005d71cd  e80effffff           call 0x5d70e0
// 005d71d2  33c0                 xor eax, eax
// 005d71d4  c706a4d18300         mov dword ptr [esi], 0x83d1a4
// 005d71da  c7461094d18300       mov dword ptr [esi + 0x10], 0x83d194
// 005d71e1  c746148cd18300       mov dword ptr [esi + 0x14], 0x83d18c
// 005d71e8  c7462084d18300       mov dword ptr [esi + 0x20], 0x83d184
// 005d71ef  c7462474d18300       mov dword ptr [esi + 0x24], 0x83d174
// 005d71f6  c7464464d18300       mov dword ptr [esi + 0x44], 0x83d164
// 005d71fd  c7466454d18300       mov dword ptr [esi + 0x64], 0x83d154
// 005d7204  c7868400000044d18300 mov dword ptr [esi + 0x84], 0x83d144
// 005d720e  c786a400000034d18300 mov dword ptr [esi + 0xa4], 0x83d134
// 005d7218  c786c400000024d18300 mov dword ptr [esi + 0xc4], 0x83d124
// 005d7222  c7863001000018d18300 mov dword ptr [esi + 0x130], 0x83d118
// 005d722c  898634010000         mov dword ptr [esi + 0x134], eax
// 005d7232  89442410             mov dword ptr [esp + 0x10], eax
// 005d7236  898638010000         mov dword ptr [esi + 0x138], eax
// 005d723c  8d8e3c010000         lea ecx, [esi + 0x13c]
// 005d7242  c644241001           mov byte ptr [esp + 0x10], 1
// 005d7247  e84473f8ff           call 0x55e590
// 005d724c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7250  8bc6                 mov eax, esi
// 005d7252  5e                   pop esi
// 005d7253  64890d00000000       mov dword ptr fs:[0], ecx
// 005d725a  83c410               add esp, 0x10
// 005d725d  c3                   ret 

struct TimerService {
    unsigned long slots[77];
    TimerService();
    ~TimerService();
};

struct Pair {
    unsigned long first;
    unsigned long second;
    Pair(unsigned long value);
    ~Pair();
};

__forceinline Pair::Pair(unsigned long value) : second(value)
{
}

struct Hasher {
    Hasher();
    ~Hasher();
};

struct S : TimerService {
    Pair pair;
    Hasher hasher;
    S();
};

S::S()
    : TimerService(),
      pair((
          slots[0] = 0x0083d1a4,
          slots[4] = 0x0083d194,
          slots[5] = 0x0083d18c,
          slots[8] = 0x0083d184,
          slots[9] = 0x0083d174,
          slots[17] = 0x0083d164,
          slots[25] = 0x0083d154,
          slots[33] = 0x0083d144,
          slots[41] = 0x0083d134,
          slots[49] = 0x0083d124,
          slots[76] = 0x0083d118,
          pair.first = 0,
          0)),
      hasher()
{
}
