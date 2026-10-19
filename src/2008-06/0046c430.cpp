// from server: 65% by colin
// from server: 63% by king_originala
// roc 2008-06 0046c430  unit: VCWorkspace::?$CComObject  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046c430
//
// 0046c430  55                   push ebp
// 0046c431  8d6c24d8             lea ebp, [esp - 0x28]
// 0046c435  83ec28               sub esp, 0x28
// 0046c438  6aff                 push -1
// 0046c43a  689a3b7c00           push 0x7c3b9a
// 0046c43f  64a100000000         mov eax, dword ptr fs:[0]
// 0046c445  50                   push eax
// 0046c446  64892500000000       mov dword ptr fs:[0], esp
// 0046c44d  81ecd8010000         sub esp, 0x1d8
// 0046c453  53                   push ebx
// 0046c454  56                   push esi
// 0046c455  57                   push edi
// 0046c456  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046c459  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0046c460  e803452300           call 0x6a0968
// 0046c465  50                   push eax
// 0046c466  8d4d14               lea ecx, [ebp + 0x14]
// 0046c469  e8f4442300           call 0x6a0962
// 0046c46e  6a01                 push 1
// 0046c470  6a02                 push 2
// 0046c472  8d8d1cffffff         lea ecx, [ebp - 0xe4]
// 0046c478  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c47c  ff1530248000         call dword ptr [0x802430]
// 0046c482  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0046c485  50                   push eax
// 0046c486  8d4d34               lea ecx, [ebp + 0x34]
// 0046c489  c645fc03             mov byte ptr [ebp - 4], 3
// 0046c48d  ff15d83e8000         call dword ptr [0x803ed8]
// 0046c493  b304                 mov bl, 4
// 0046c495  8d4d34               lea ecx, [ebp + 0x34]
// 0046c498  885dfc               mov byte ptr [ebp - 4], bl
// 0046c49b  ff15e03e8000         call dword ptr [0x803ee0]
// 0046c4a1  83ec20               sub esp, 0x20
// 0046c4a4  8bf4                 mov esi, esp
// 0046c4a6  896508               mov dword ptr [ebp + 8], esp
// 0046c4a9  50                   push eax
// 0046c4aa  8bce                 mov ecx, esi
// 0046c4ac  897500               mov dword ptr [ebp], esi
// 0046c4af  ff1558248000         call dword ptr [0x802458]
// 0046c4b5  c645fc05             mov byte ptr [ebp - 4], 5
// 0046c4b9  e8b27d0e00           call 0x554270
// 0046c4be  89461c               mov dword ptr [esi + 0x1c], eax
// 0046c4c1  8b7d30               mov edi, dword ptr [ebp + 0x30]
// 0046c4c4  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0046c4c7  c645fc06             mov byte ptr [ebp - 4], 6
// 0046c4cb  85c9                 test ecx, ecx
// 0046c4cd  7409                 je 0x46c4d8
// 0046c4cf  e8cc29fbff           call 0x41eea0
// 0046c4d4  8bc8                 mov ecx, eax
// 0046c4d6  eb02                 jmp 0x46c4da
// 0046c4d8  33c9                 xor ecx, ecx
// 0046c4da  8d5524               lea edx, [ebp + 0x24]
// 0046c4dd  52                   push edx
// 0046c4de  885dfc               mov byte ptr [ebp - 4], bl
// 0046c4e1  e83a5a0f00           call 0x561f20
// 0046c4e6  8b30                 mov esi, dword ptr [eax]
// 0046c4e8  c70000000000         mov dword ptr [eax], 0
// 0046c4ee  897530               mov dword ptr [ebp + 0x30], esi
// 0046c4f1  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0046c4f4  c645fc07             mov byte ptr [ebp - 4], 7
// 0046c4f8  85c0                 test eax, eax
// 0046c4fa  7410                 je 0x46c50c
// 0046c4fc  8b08                 mov ecx, dword ptr [eax]
// 0046c4fe  8b5104               mov edx, dword ptr [ecx + 4]
// 0046c501  8d0c02               lea ecx, [edx + eax]
// 0046c504  8b01                 mov eax, dword ptr [ecx]
// 0046c506  8b10                 mov edx, dword ptr [eax]
// 0046c508  6a01                 push 1
// 0046c50a  ffd2                 call edx
// 0046c50c  6800100000           push 0x1000
// 0046c511  8d851cffffff         lea eax, [ebp - 0xe4]
// 0046c517  50                   push eax
// 0046c518  56                   push esi
// 0046c519  e8e24dfeff           call 0x451300
// 0046c51e  83c40c               add esp, 0xc
// 0046c521  885dfc               mov byte ptr [ebp - 4], bl
// 0046c524  85f6                 test esi, esi
// 0046c526  7411                 je 0x46c539
// 0046c528  8b0e                 mov ecx, dword ptr [esi]
// 0046c52a  8b5104               mov edx, dword ptr [ecx + 4]
// 0046c52d  8b0432               mov eax, dword ptr [edx + esi]
// 0046c530  8d0c32               lea ecx, [edx + esi]
// 0046c533  8b10                 mov edx, dword ptr [eax]
// 0046c535  6a01                 push 1
// 0046c537  ffd2                 call edx
// 0046c539  8d4d34               lea ecx, [ebp + 0x34]
// 0046c53c  ff15143f8000         call dword ptr [0x803f14]
// 0046c542  8d45d4               lea eax, [ebp - 0x2c]
// 0046c545  50                   push eax
// 0046c546  8d8d1cffffff         lea ecx, [ebp - 0xe4]
// 0046c54c  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0046c553  ff1534248000         call dword ptr [0x802434]
// 0046c559  8bc8                 mov ecx, eax
// 0046c55b  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 0046c55f  ff1564248000         call dword ptr [0x802464]
// 0046c565  8b4d78               mov ecx, dword ptr [ebp + 0x78]
// 0046c568  8b5568               mov edx, dword ptr [ebp + 0x68]
// 0046c56b  51                   push ecx
// 0046c56c  83ec10               sub esp, 0x10
// 0046c56f  8bcc                 mov ecx, esp
// 0046c571  8911                 mov dword ptr [ecx], edx
// 0046c573  8b556c               mov edx, dword ptr [ebp + 0x6c]
// 0046c576  895104               mov dword ptr [ecx + 4], edx
// 0046c579  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0046c57c  895108               mov dword ptr [ecx + 8], edx
// 0046c57f  8b5574               mov edx, dword ptr [ebp + 0x74]
// 0046c582  89510c               mov dword ptr [ecx + 0xc], edx
// 0046c585  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0046c588  83ec10               sub esp, 0x10
// 0046c58b  8bcc                 mov ecx, esp
// 0046c58d  8911                 mov dword ptr [ecx], edx
// 0046c58f  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 0046c592  895104               mov dword ptr [ecx + 4], edx
// 0046c595  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0046c598  895108               mov dword ptr [ecx + 8], edx
// 0046c59b  8b5564               mov edx, dword ptr [ebp + 0x64]
// 0046c59e  89510c               mov dword ptr [ecx + 0xc], edx
// 0046c5a1  8b5548               mov edx, dword ptr [ebp + 0x48]
// 0046c5a4  83ec10               sub esp, 0x10
// 0046c5a7  8bcc                 mov ecx, esp
// 0046c5a9  8911                 mov dword ptr [ecx], edx
// 0046c5ab  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 0046c5ae  895104               mov dword ptr [ecx + 4], edx
// 0046c5b1  8b5550               mov edx, dword ptr [ebp + 0x50]
// 0046c5b4  895108               mov dword ptr [ecx + 8], edx
// 0046c5b7  8b5554               mov edx, dword ptr [ebp + 0x54]
// 0046c5ba  89510c               mov dword ptr [ecx + 0xc], edx
// 0046c5bd  8b5538               mov edx, dword ptr [ebp + 0x38]
// 0046c5c0  83ec10               sub esp, 0x10
// 0046c5c3  8bcc                 mov ecx, esp
// 0046c5c5  8911                 mov dword ptr [ecx], edx
// 0046c5c7  8b553c               mov edx, dword ptr [ebp + 0x3c]
// 0046c5ca  895104               mov dword ptr [ecx + 4], edx
// 0046c5cd  8b5540               mov edx, dword ptr [ebp + 0x40]
// 0046c5d0  895108               mov dword ptr [ecx + 8], edx
// 0046c5d3  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0046c5d6  89510c               mov dword ptr [ecx + 0xc], edx
// 0046c5d9  50                   push eax
// 0046c5da  8bcf                 mov ecx, edi
// 0046c5dc  e84fecffff           call 0x46b230
// 0046c5e1  8d4dd4               lea ecx, [ebp - 0x2c]
// 0046c5e4  8bf0                 mov esi, eax
// 0046c5e6  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c5ea  ff1568248000         call dword ptr [0x802468]
// 0046c5f0  8d8d1cffffff         lea ecx, [ebp - 0xe4]
// 0046c5f6  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c5fa  ff1538248000         call dword ptr [0x802438]
// 0046c600  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0046c603  c645fc00             mov byte ptr [ebp - 4], 0
// 0046c607  85c0                 test eax, eax
// 0046c609  7406                 je 0x46c611
// 0046c60b  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0046c60e  894804               mov dword ptr [eax + 4], ecx
// 0046c611  837d2000             cmp dword ptr [ebp + 0x20], 0
// 0046c615  740b                 je 0x46c622
// 0046c617  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0046c61a  52                   push edx
// 0046c61b  6a00                 push 0
// 0046c61d  e83a432300           call 0x6a095c
// 0046c622  8bc6                 mov eax, esi
// 0046c624  eb75                 jmp 0x46c69b
#include <intrin.h>

struct Block16 { unsigned long value[4]; };

struct String
{
    unsigned char data[28];
    String();
    String(const char*);
    ~String();
    const char* c_str() const;
};

struct Text
{
    unsigned char data[4];
    Text(const char*);
    ~Text();
    const char* get() const;
};

struct Output
{
    unsigned char data[184];
    Output(int, bool);
    ~Output();
    String str() const;
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern const char* (__thiscall *string_data)(const String*);
extern void (__thiscall *text_construct)(Text*, const char*);
extern void (__thiscall *text_destroy)(Text*);
extern const char* (__thiscall *text_data)(const Text*);
extern void (__thiscall *output_construct)(Output*, int, bool);
extern void (__thiscall *output_destroy)(Output*);
extern String* (__thiscall *output_string)(const Output*, String*);

inline String::String() {}
inline String::String(const char* p) { string_construct(this, p); }
inline String::~String() { string_destroy(this); }
inline const char* String::c_str() const { return string_data(this); }
inline Text::Text(const char* p) { text_construct(this, p); }
inline Text::~Text() { text_destroy(this); }
inline const char* Text::get() const { return text_data(this); }
inline Output::Output(int mode, bool initialize)
{
    output_construct(this, mode, initialize);
}
inline Output::~Output() { output_destroy(this); }
inline String Output::str() const
{
    String result;
    output_string(this, &result);
    return result;
}

extern void* __cdecl local_scope();
extern void* __cdecl current_context();
extern void __stdcall restore_context(int, void*);

struct Context
{
    unsigned long saved;
    unsigned long* target;
    void* token;
    int active;
    Context(void*);
    ~Context();
};

inline Context::~Context()
{
    if (target)
        target[1] = saved;
    if (active)
        restore_context(0, token);
}

struct Guid
{
    String text;
    void* scope;
    Guid(const char*);
};

inline Guid::Guid(const char* p) : text(p), scope(local_scope()) {}

struct StreamBase { virtual ~StreamBase(); };
struct Stream : virtual StreamBase {};

struct TemporaryOwner
{
    mutable Stream* pointer;
    ~TemporaryOwner();
};

struct Owner
{
    Stream* pointer;
    Owner(const TemporaryOwner&);
    ~Owner();
};

inline TemporaryOwner::~TemporaryOwner()
{
    if (pointer)
        delete pointer;
}

inline Owner::Owner(const TemporaryOwner& other) : pointer(other.pointer)
{
    other.pointer = 0;
}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct Source
{
    Source* resolve();
    TemporaryOwner open(Guid);
};

struct Workspace
{
    unsigned char padding[36];
    Source* source;
    int submit(const char*, Block16, Block16, Block16, Block16, int);
};

extern void __cdecl copy_stream(Stream*, Output*, int);

int __cdecl function(Workspace* workspace, const char* text,
                     Block16 a, Block16 b, Block16 c, Block16 d, int flags)
{
    try
    {
        Context context(current_context());
        Output output(2, true);
        _ReadWriteBarrier();
        {
            Text input(text);
            Owner stream((workspace->source
                ? workspace->source->resolve() : 0)->open(Guid(input.get())));
            copy_stream(stream.pointer, &output, 4096);
        }
        return workspace->submit(output.str().c_str(), a, b, c, d, flags);
    }
    catch (...)
    {
        return -2147467259;
    }
}
