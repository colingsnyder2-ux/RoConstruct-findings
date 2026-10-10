// from server: 71% by atomic.potato
typedef double QWORD_FLOAT;

extern "C" void __stdcall Function977d20(void*, void*, QWORD_FLOAT);

struct UserInputJob
{
    int Run(void*, void*);
};

int UserInputJob::Run(void* a, void* b)
{
    QWORD_FLOAT value = 0.0;
    Function977d20(b, a, value);
    return (int)b;
}
