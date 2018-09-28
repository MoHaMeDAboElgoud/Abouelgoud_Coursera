/**
*@ Maximum function takes the array elements and length
*and return with the maximum
*
*/
int find_maximum(unsigned int num[] ,int len);

/*
*@Minimum Function takes the array elements and length
*and return with the minimum
* 
*/
int find_minimum(unsigned int num[] ,int len);

/*
*@Mean Function takes the array elements and length
*Returns with the mean valu
*/
int find_mean(unsigned int num[] ,int len);

/*
*@Median Function takes the array elements and length
*Returns with the median value
*/
int find_median(unsigned int num[] ,int len);

/*
@Sort function takes the array elements and length
*returns with the array sorts from largest to smallest
*/
int * sort_array(unsigned int num[] ,int len);

/*
@Print array function takes the array elements and length
*has no return just print array on screen
*/
void print_array(unsigned int num[] ,int len);

/*
*@Print statistics function takes minimum, maximum, mean, and median
*and print them on the screen
*/
void print_statistics(unsigned int min,unsigned int max,unsigned int mean,unsigned int median);