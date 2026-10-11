// from server: 61% by atomic.potato
extern "C" void* basic_ios_rdbuf(void*);
extern "C" void basic_streambuf_unlock(void*);

struct DSVideoCaptureEngine
{
    void* stream;

    void unlockStream();
};

void DSVideoCaptureEngine::unlockStream()
{
    void* buffer = basic_ios_rdbuf(stream);
    if (buffer)
    {
        buffer = basic_ios_rdbuf(stream);
        basic_streambuf_unlock(buffer);
    }
}
