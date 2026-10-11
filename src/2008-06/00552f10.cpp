// from server: 33% by tester
struct AggChunk {
    void method(int);
};

extern "C" void __cdecl sub_54e310(void *);
extern "C" void __cdecl sub_54da40(void *);
extern "C" void * __cdecl sub_552fa0(void *);
extern "C" void __cdecl sub_552ff0(void *, int, void *);
extern "C" void __cdecl sub_547020(void *);

void AggChunk::method(int a)
{
    char buf[0x38];
    sub_54e310(buf);
    sub_54da40(this);
    void *p = sub_552fa0(buf);
    sub_552ff0(this, a, p);
    sub_547020(buf);
}
