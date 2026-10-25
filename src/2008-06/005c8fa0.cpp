// from server: 92% by king_originala
// roc 2008-06 005c8fa0  unit: RBX::LaserTool  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8fa0
//
// 005c8fa0  55                   push ebp
// 005c8fa1  8bec                 mov ebp, esp
// 005c8fa3  83e4c0               and esp, 0xffffffc0
// 005c8fa6  64a100000000         mov eax, dword ptr fs:[0]
// 005c8fac  6aff                 push -1
// 005c8fae  682e517d00           push 0x7d512e
// 005c8fb3  50                   push eax
// 005c8fb4  64892500000000       mov dword ptr fs:[0], esp
// 005c8fbb  81ecac000000         sub esp, 0xac
// 005c8fc1  56                   push esi
// 005c8fc2  8b7508               mov esi, dword ptr [ebp + 8]
// 005c8fc5  dd4648               fld qword ptr [esi + 0x48]
// 005c8fc8  57                   push edi
// 005c8fc9  8bf9                 mov edi, ecx
// 005c8fcb  dd9f30010000         fstp qword ptr [edi + 0x130]
// 005c8fd1  83ec08               sub esp, 8
// 005c8fd4  dd4648               fld qword ptr [esi + 0x48]
// 005c8fd7  d9ee                 fldz 
// 005c8fd9  ded9                 fcompp 
// 005c8fdb  dfe0                 fnstsw ax
// 005c8fdd  dd4648               fld qword ptr [esi + 0x48]
// 005c8fe0  dd1c24               fstp qword ptr [esp]
// 005c8fe3  f6c405               test ah, 5
// 005c8fe6  7a74                 jp 0x5c905c
// 005c8fe8  8d442434             lea eax, [esp + 0x34]
// 005c8fec  50                   push eax
// 005c8fed  e86edcfdff           call 0x5a6c60
// 005c8ff2  83c40c               add esp, 0xc
// 005c8ff5  dd4648               fld qword ptr [esi + 0x48]
// 005c8ff8  837c244410           cmp dword ptr [esp + 0x44], 0x10
// 005c8ffd  8b442430             mov eax, dword ptr [esp + 0x30]
// 005c9001  c78424bc00000000000000 mov dword ptr [esp + 0xbc], 0
// 005c900c  7304                 jae 0x5c9012
// 005c900e  8d442430             lea eax, [esp + 0x30]
// 005c9012  d9e8                 fld1 
// 005c9014  83ec08               sub esp, 8
// 005c9017  def1                 fdivrp st(1)
// 005c9019  8d4c2450             lea ecx, [esp + 0x50]
// 005c901d  dd1c24               fstp qword ptr [esp]
// 005c9020  50                   push eax
// 005c9021  68d89b8300           push 0x839bd8
// 005c9026  51                   push ecx
// 005c9027  e8e40af4ff           call 0x509b10
// 005c902c  83c414               add esp, 0x14
// 005c902f  50                   push eax
// 005c9030  8d8f38010000         lea ecx, [edi + 0x138]
// 005c9036  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 005c903e  ff150c248000         call dword ptr [0x80240c]
// 005c9044  8d4c2448             lea ecx, [esp + 0x48]
// 005c9048  c68424bc00000000     mov byte ptr [esp + 0xbc], 0
// 005c9050  ff1568248000         call dword ptr [0x802468]
// 005c9056  8d4c242c             lea ecx, [esp + 0x2c]
// 005c905a  eb29                 jmp 0x5c9085
// 005c905c  8d54246c             lea edx, [esp + 0x6c]
// 005c9060  52                   push edx
// 005c9061  e8fadbfdff           call 0x5a6c60
// 005c9066  83c40c               add esp, 0xc
// 005c9069  50                   push eax
// 005c906a  8d8f38010000         lea ecx, [edi + 0x138]
// 005c9070  c78424c000000002000000 mov dword ptr [esp + 0xc0], 2
// 005c907b  ff150c248000         call dword ptr [0x80240c]
// 005c9081  8d4c2464             lea ecx, [esp + 0x64]
// 005c9085  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 005c9090  ff1568248000         call dword ptr [0x802468]
// 005c9096  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 005c909d  5f                   pop edi
// 005c909e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c90a5  5e                   pop esi
// 005c90a6  8be5                 mov esp, ebp
// 005c90a8  5d                   pop ebp
// 005c90a9  c20400               ret 4

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
    String& operator=(const String&);

    const char* c_str() const {
        const char* result = storage.pointer;
        if (capacity < 16)
            result = storage.buffer;
        return result;
    }
};

String __cdecl describeTime(double);
String __cdecl formatText(const char*, ...);

struct Sample {
    char padding[0x48];
    volatile double time;
};

struct LaserTool {
    char padding[0x130];
    double time;
    String text;

    void update(const Sample&);
};

void LaserTool::update(const Sample& sample)
{
    time = sample.time;
    if (0.0 < sample.time) {
        String description = describeTime(sample.time);
        double interval = sample.time;
        text = formatText("%s (%.3gfps)", description.c_str(),
                          1.0 / interval);
    } else {
        text = describeTime(sample.time);
    }
}
