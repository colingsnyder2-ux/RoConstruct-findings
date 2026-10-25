// from server: 100% by king_originala
// roc 2008-06 005c9fe0  unit: ProfilingItem  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9fe0
//
// 005c9fe0  55                   push ebp
// 005c9fe1  8bec                 mov ebp, esp
// 005c9fe3  83e4c0               and esp, 0xffffffc0
// 005c9fe6  64a100000000         mov eax, dword ptr fs:[0]
// 005c9fec  6aff                 push -1
// 005c9fee  681c527d00           push 0x7d521c
// 005c9ff3  50                   push eax
// 005c9ff4  64892500000000       mov dword ptr fs:[0], esp
// 005c9ffb  dd0540f69400         fld qword ptr [0x94f640]
// 005ca001  81ec6c010000         sub esp, 0x16c
// 005ca007  56                   push esi
// 005ca008  57                   push edi
// 005ca009  83ec08               sub esp, 8
// 005ca00c  8bf1                 mov esi, ecx
// 005ca00e  dd1c24               fstp qword ptr [esp]
// 005ca011  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 005ca017  8d442410             lea eax, [esp + 0x10]
// 005ca01b  50                   push eax
// 005ca01c  e8ffa0ffff           call 0x5c4120
// 005ca021  d9ee                 fldz 
// 005ca023  dd442408             fld qword ptr [esp + 8]
// 005ca027  d8d1                 fcom st(1)
// 005ca029  dfe0                 fnstsw ax
// 005ca02b  f6c441               test ah, 0x41
// 005ca02e  0f8501010000         jne 0x5ca135
// 005ca034  ddd9                 fstp st(1)
// 005ca036  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 005ca03c  dc7c2410             fdivr qword ptr [esp + 0x10]
// 005ca040  6a00                 push 0
// 005ca042  689cf69400           push 0x94f69c
// 005ca047  6848f69400           push 0x94f648
// 005ca04c  6a00                 push 0
// 005ca04e  51                   push ecx
// 005ca04f  dd9e30010000         fstp qword ptr [esi + 0x130]
// 005ca055  e86c770d00           call 0x6a17c6
// 005ca05a  83c414               add esp, 0x14
// 005ca05d  85c0                 test eax, eax
// 005ca05f  7416                 je 0x5ca077
// 005ca061  dd8630010000         fld qword ptr [esi + 0x130]
// 005ca067  83ec08               sub esp, 8
// 005ca06a  dd1c24               fstp qword ptr [esp]
// 005ca06d  68689f8300           push 0x839f68
// 005ca072  e9a9000000           jmp 0x5ca120
// 005ca077  837c241800           cmp dword ptr [esp + 0x18], 0
// 005ca07c  0f8e87000000         jle 0x5ca109
// 005ca082  8d4c2408             lea ecx, [esp + 8]
// 005ca086  e8d59effff           call 0x5c3f60
// 005ca08b  83ec08               sub esp, 8
// 005ca08e  8d44242c             lea eax, [esp + 0x2c]
// 005ca092  dd1c24               fstp qword ptr [esp]
// 005ca095  50                   push eax
// 005ca096  e8c5cbfdff           call 0x5a6c60
// 005ca09b  83c40c               add esp, 0xc
// 005ca09e  837c243c10           cmp dword ptr [esp + 0x3c], 0x10
// 005ca0a3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ca0a7  c784247c01000000000000 mov dword ptr [esp + 0x17c], 0
// 005ca0b2  7304                 jae 0x5ca0b8
// 005ca0b4  8d7c2428             lea edi, [esp + 0x28]
// 005ca0b8  dd8630010000         fld qword ptr [esi + 0x130]
// 005ca0be  83ec08               sub esp, 8
// 005ca0c1  dc0d887a8100         fmul qword ptr [0x817a88]
// 005ca0c7  8d4c2410             lea ecx, [esp + 0x10]
// 005ca0cb  dd1c24               fstp qword ptr [esp]
// 005ca0ce  e86d9effff           call 0x5c3f40
// 005ca0d3  83ec08               sub esp, 8
// 005ca0d6  dd1c24               fstp qword ptr [esp]
// 005ca0d9  57                   push edi
// 005ca0da  8d4c2454             lea ecx, [esp + 0x54]
// 005ca0de  68509f8300           push 0x839f50
// 005ca0e3  51                   push ecx
// 005ca0e4  ff1530288000         call dword ptr [0x802830]
// 005ca0ea  83c41c               add esp, 0x1c
// 005ca0ed  8d4c2424             lea ecx, [esp + 0x24]
// 005ca0f1  c784247c010000ffffffff mov dword ptr [esp + 0x17c], 0xffffffff
// 005ca0fc  ff1568248000         call dword ptr [0x802468]
// 005ca102  8d442440             lea eax, [esp + 0x40]
// 005ca106  50                   push eax
// 005ca107  eb39                 jmp 0x5ca142
// 005ca109  dd8630010000         fld qword ptr [esi + 0x130]
// 005ca10f  83ec08               sub esp, 8
// 005ca112  dc0d887a8100         fmul qword ptr [0x817a88]
// 005ca118  dd1c24               fstp qword ptr [esp]
// 005ca11b  687c7a8100           push 0x817a7c
// 005ca120  8d54244c             lea edx, [esp + 0x4c]
// 005ca124  52                   push edx
// 005ca125  ff1530288000         call dword ptr [0x802830]
// 005ca12b  83c410               add esp, 0x10
// 005ca12e  8d442440             lea eax, [esp + 0x40]
// 005ca132  50                   push eax
// 005ca133  eb0d                 jmp 0x5ca142
// 005ca135  ddd8                 fstp st(0)
// 005ca137  68109e8100           push 0x819e10
// 005ca13c  dd9e30010000         fstp qword ptr [esi + 0x130]
// 005ca142  8d8e38010000         lea ecx, [esi + 0x138]
// 005ca148  ff154c248000         call dword ptr [0x80244c]
// 005ca14e  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 005ca155  5f                   pop edi
// 005ca156  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca15d  5e                   pop esi
// 005ca15e  8be5                 mov esp, ebp
// 005ca160  5d                   pop ebp
// 005ca161  c3                   ret 

extern "C" {
extern int (__cdecl *sprintf)(char *, const char *, ...);
void * __cdecl __RTDynamicCast(void *, long, void *, void *, int);
}

extern const double sampleInterval;
extern char profilerType;
extern char countProfilerType;

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class T, class Traits, class Allocator> class basic_string;

template<>
class basic_string<char, char_traits<char>, allocator<char> > {
public:
    unsigned int allocatorState;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    ~basic_string();
    basic_string &operator=(const char *);
};
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

extern void (__thiscall *destroyString)(String *);
extern String &(__thiscall *assignString)(String *, const char *);

__forceinline String::~basic_string()
{
    destroyString(this);
}

__forceinline String &String::operator=(const char *value)
{
    return assignString(this, value);
}

struct Sample {
    double lastSampleTime;
    double sampleTimeSpan;
    int frames;

    double f();
    double getActualFPS() const;
};

struct Profiler {
    Sample getSample(double);
};

extern String __cdecl formatTime(double);

struct ProfilingItem {
    char padding[0x130];
    double rate;
    String text;
    unsigned int reserved;
    Profiler *profiler;

    void update();
};

void ProfilingItem::update()
{
    Sample sample = profiler->getSample(sampleInterval);
    __declspec(align(64)) char buffer[256];

    if (sample.lastSampleTime > 0.0) {
        rate = sample.sampleTimeSpan / sample.lastSampleTime;

        if (__RTDynamicCast(profiler, 0, &profilerType,
                            &countProfilerType, 0)) {
            sprintf(buffer, "%.3g/s", rate);
        } else if (sample.frames > 0) {
            {
                String duration = formatTime(sample.f());
                const char *value = duration.capacity >= 16
                    ? duration.pointer : duration.buffer;
                sprintf(buffer, "%s, %.3gfps (%.3g%%)", value,
                        sample.getActualFPS(), rate * 100.0);
            }
        } else {
            sprintf(buffer, "%.3g%%", rate * 100.0);
        }

        text = buffer;
    } else {
        rate = 0.0;
        text = "?";
    }
}
