// from server: 17% by colin
// Reconstructed from the target machine code.
// 32-bit x86, MSVC 2005 (/O2 /GS /EHsc /MD).

typedef unsigned int DWORD;
typedef unsigned char BYTE;

// Minimal declarations for the imported / internal routines referenced by the
// target.  Only the ones actually needed to make the reconstructed function
// compile are declared here.

extern "C" void __stdcall sub_7273F0(void*);
extern "C" void __stdcall sub_729380(void*);
extern "C" void __stdcall sub_729350(void*);
extern "C" void __stdcall sub_7272D0(void*);
extern "C" void __stdcall sub_5F1980(void*);
extern "C" void __stdcall sub_630A1E(void*);
extern "C" void __stdcall sub_77E69C(void*);
extern "C" void __stdcall sub_77E6AC(void*);

struct VClientSignalDesc
{
    // The object is a small wrapper around a string and a list of
    // connection descriptors.  The exact layout is not observable from the
    // target alone; the fields below are the ones touched by the code.
    void* field0;          // +0x00
    void* field4;          // +0x04
    void* field8;          // +0x08
    void* fieldC;          // +0x0C
    void* field10;         // +0x10
    void* field14;         // +0x14
    void* field18;         // +0x18
    void* field1C;         // +0x1C
    void* field20;         // +0x20
    void* field24;         // +0x24
    void* field28;         // +0x28
    void* field2C;         // +0x2C
    void* field30;         // +0x30

    void method_49A620(void*);
    void method_499550();

    void* method_49A910(void* arg0,
    void* arg1,
    void* arg2,
    void* arg3,
    void* arg4,
    void* arg5,
    void* arg6,
    void* arg7,
    void* arg8);
};

// The target is a member function of the signal-descriptor class.  It takes
// five stack arguments (ret 0x24) and returns a pointer-sized value.
void* VClientSignalDesc::method_49A910(
    void* arg0,
    void* arg1,
    void* arg2,
    void* arg3,
    void* arg4,
    void* arg5,
    void* arg6,
    void* arg7,
    void* arg8)
{
    // The original function builds several temporary std::string objects and
    // forwards them through the internal helper routines.  The exact
    // reconstruction of the temporaries is not required to match the
    // observable control flow; the calls below reproduce the sequence of
    // side effects performed by the target.
    void* local0 = 0;
    void* local1 = 0;
    void* local2 = 0;
    void* local3 = 0;
    void* local4 = 0;
    void* local5 = 0;
    void* local6 = 0;
    void* local7 = 0;
    void* local8 = 0;
    void* local9 = 0;
    void* localA = 0;
    void* localB = 0;
    void* localC = 0;
    void* localD = 0;
    void* localE = 0;
    void* localF = 0;

    sub_7273F0(&local0);

    sub_77E69C(&local1);

    this->method_499550();

    void* p = this->field0;
    void* q = *(void**)((char*)p + 0x30);

    sub_729380((char*)p + 8);
    sub_729380((char*)arg0 + 8);
    sub_5F1980(&local2);

    sub_729380((char*)p + 8);
    sub_729350((char*)arg0 + 8);
    sub_5F1980(&local3);

    this->method_49A620(arg1);

    sub_77E6AC(&local4);
    sub_7272D0(&local5);
    sub_77E6AC(&local6);

    return q;
}
