// from server: 72% by king_originala
struct S {
    virtual void f();

    int index;
    float coefficient;
    int first;
    int second;
    int third;
    int fourth;
    float value1;
    int state;
    float value2;
    float value3;
    float value4;
    bool enabled;

    S(int a, int b, int c, int d, float scale, float radius);
};

S::S(int a, int b, int c, int d, float scale, float radius)
    : index(-1),
      coefficient(scale * radius * radius),
      first(a),
      second(b),
      third(c),
      fourth(d),
      value1(0.0f),
      state(0),
      value2(0.0f),
      value3(0.0f),
      value4(0.0f),
      enabled(false)
{
}
