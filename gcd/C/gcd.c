int		gcd(int a0, int a1) {
	int s, t, tmp;

	s = a0;
	t = a1;
	while (t != 0)
	{
		tmp = s % t;
		s = t;
		t = tmp;
	}
	return (s);
}
