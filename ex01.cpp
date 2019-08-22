#include <stdio.h>
#include <functional>

typedef std::function<void()> AAA_func;

class AAA
{
public:
    void show ()
    {
        printf ("AAA show\n");
    }

    AAA_func func = show;
};

int
main ()
{
    AAA aaa;
    /// AAA_func func = std::bind(&AAA::show, aaa);

    aaa.func ();
    aaa.func ();
}
